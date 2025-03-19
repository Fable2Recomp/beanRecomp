#include "decompressor.h"
#include "os/logger.h"
#include <algorithm>
#include <cstring>

namespace BeanRecomp
{
namespace PPC
{
    bool Decompressor::Decompress(const uint8_t* input, size_t inputSize,
                                 std::vector<uint8_t>& output)
    {
        if (!input || inputSize < sizeof(CompressionHeader))
        {
            Logger::LogError("Invalid input data");
            return false;
        }

        CompressionHeader header;
        std::memcpy(&header, input, sizeof(CompressionHeader));

        if (!ValidateHeader(header))
        {
            Logger::LogError("Invalid compression header");
            return false;
        }

        output.resize(header.decompressedSize);

        switch (header.type)
        {
            case CompressionType::LZ77:
                return DecompressLZ77(input + sizeof(CompressionHeader),
                                     inputSize - sizeof(CompressionHeader),
                                     output);
            case CompressionType::RLE:
                return DecompressRLE(input + sizeof(CompressionHeader),
                                    inputSize - sizeof(CompressionHeader),
                                    output);
            case CompressionType::HUFFMAN:
                return DecompressHuffman(input + sizeof(CompressionHeader),
                                        inputSize - sizeof(CompressionHeader),
                                        output);
            case CompressionType::YAZ0:
                return DecompressYAZ0(input + sizeof(CompressionHeader),
                                     inputSize - sizeof(CompressionHeader),
                                     output);
            case CompressionType::YAY0:
                return DecompressYAY0(input + sizeof(CompressionHeader),
                                     inputSize - sizeof(CompressionHeader),
                                     output);
            case CompressionType::NONE:
                std::memcpy(output.data(),
                           input + sizeof(CompressionHeader),
                           header.decompressedSize);
                return true;
            default:
                Logger::LogError("Unsupported compression type");
                return false;
        }
    }

    bool Decompressor::Compress(const uint8_t* input, size_t inputSize,
                               std::vector<uint8_t>& output, CompressionType type)
    {
        if (!input || inputSize == 0)
        {
            Logger::LogError("Invalid input data");
            return false;
        }

        CompressionHeader header;
        header.magic = 0x4245414E; // "BEAN"
        header.decompressedSize = static_cast<uint32_t>(inputSize);
        header.type = type;

        output.clear();
        output.resize(sizeof(CompressionHeader));

        bool success = false;
        switch (type)
        {
            case CompressionType::LZ77:
                success = CompressLZ77(input, inputSize, output);
                break;
            case CompressionType::RLE:
                success = CompressRLE(input, inputSize, output);
                break;
            case CompressionType::HUFFMAN:
                success = CompressHuffman(input, inputSize, output);
                break;
            default:
                Logger::LogError("Unsupported compression type");
                return false;
        }

        if (success)
        {
            header.compressedSize = static_cast<uint32_t>(output.size() - sizeof(CompressionHeader));
            std::memcpy(output.data(), &header, sizeof(CompressionHeader));
            return true;
        }

        return false;
    }

    bool Decompressor::DetectCompression(const uint8_t* input, size_t inputSize,
                                       CompressionType& type)
    {
        if (!input || inputSize < sizeof(CompressionHeader))
            return false;

        CompressionHeader header;
        std::memcpy(&header, input, sizeof(CompressionHeader));

        if (!ValidateHeader(header))
            return false;

        type = header.type;
        return true;
    }

    bool Decompressor::ValidateHeader(const CompressionHeader& header)
    {
        if (header.magic != 0x4245414E) // "BEAN"
            return false;

        if (header.decompressedSize == 0 || header.decompressedSize > 0x10000000)
            return false;

        if (header.compressedSize > header.decompressedSize)
            return false;

        return true;
    }

    bool Decompressor::DecompressLZ77(const uint8_t* input, size_t inputSize,
                                     std::vector<uint8_t>& output)
    {
        size_t outPos = 0;
        size_t inPos = 0;

        while (inPos < inputSize && outPos < output.size())
        {
            uint8_t flag = input[inPos++];
            
            for (int i = 0; i < 8 && inPos < inputSize && outPos < output.size(); i++)
            {
                if (flag & (1 << (7 - i)))
                {
                    // Compressed data
                    if (inPos + 2 > inputSize)
                        return false;

                    uint16_t offset = (input[inPos] << 8) | input[inPos + 1];
                    uint8_t length = ((offset >> 12) & 0xF) + 3;
                    offset &= 0xFFF;

                    if (outPos < offset)
                        return false;

                    for (uint8_t j = 0; j < length && outPos < output.size(); j++)
                    {
                        output[outPos] = output[outPos - offset - 1];
                        outPos++;
                    }

                    inPos += 2;
                }
                else
                {
                    // Uncompressed data
                    if (inPos >= inputSize)
                        return false;

                    output[outPos++] = input[inPos++];
                }
            }
        }

        return true;
    }

    bool Decompressor::DecompressRLE(const uint8_t* input, size_t inputSize,
                                    std::vector<uint8_t>& output)
    {
        size_t outPos = 0;
        size_t inPos = 0;

        while (inPos < inputSize && outPos < output.size())
        {
            uint8_t count = input[inPos++];
            
            if (count & 0x80)
            {
                // Run of repeated bytes
                count &= 0x7F;
                uint8_t value = input[inPos++];

                for (uint8_t i = 0; i < count && outPos < output.size(); i++)
                {
                    output[outPos++] = value;
                }
            }
            else
            {
                // Run of unique bytes
                for (uint8_t i = 0; i < count && inPos < inputSize && outPos < output.size(); i++)
                {
                    output[outPos++] = input[inPos++];
                }
            }
        }

        return true;
    }

    bool Decompressor::DecompressHuffman(const uint8_t* input, size_t inputSize,
                                        std::vector<uint8_t>& output)
    {
        // TODO: Implement Huffman decompression
        // This is a placeholder that just copies the input
        std::memcpy(output.data(), input, std::min(inputSize, output.size()));
        return true;
    }

    bool Decompressor::DecompressYAZ0(const uint8_t* input, size_t inputSize,
                                     std::vector<uint8_t>& output)
    {
        size_t outPos = 0;
        size_t inPos = 0;

        while (inPos < inputSize && outPos < output.size())
        {
            uint8_t flag = input[inPos++];
            
            for (int i = 0; i < 8 && inPos < inputSize && outPos < output.size(); i++)
            {
                if (flag & (1 << (7 - i)))
                {
                    // Compressed data
                    if (inPos + 2 > inputSize)
                        return false;

                    uint16_t offset = (input[inPos] << 8) | input[inPos + 1];
                    uint8_t length = ((offset >> 12) & 0xF) + 3;
                    offset &= 0xFFF;

                    if (outPos < offset)
                        return false;

                    for (uint8_t j = 0; j < length && outPos < output.size(); j++)
                    {
                        output[outPos] = output[outPos - offset - 1];
                        outPos++;
                    }

                    inPos += 2;
                }
                else
                {
                    // Uncompressed data
                    if (inPos >= inputSize)
                        return false;

                    output[outPos++] = input[inPos++];
                }
            }
        }

        return true;
    }

    bool Decompressor::DecompressYAY0(const uint8_t* input, size_t inputSize,
                                     std::vector<uint8_t>& output)
    {
        // YAY0 is similar to YAZ0 but with a different header structure
        // TODO: Implement YAY0 decompression
        return DecompressYAZ0(input, inputSize, output);
    }

    bool Decompressor::CompressLZ77(const uint8_t* input, size_t inputSize,
                                   std::vector<uint8_t>& output)
    {
        // TODO: Implement LZ77 compression
        // For now, just copy the input
        output.insert(output.end(), input, input + inputSize);
        return true;
    }

    bool Decompressor::CompressRLE(const uint8_t* input, size_t inputSize,
                                  std::vector<uint8_t>& output)
    {
        // TODO: Implement RLE compression
        // For now, just copy the input
        output.insert(output.end(), input, input + inputSize);
        return true;
    }

    bool Decompressor::CompressHuffman(const uint8_t* input, size_t inputSize,
                                      std::vector<uint8_t>& output)
    {
        // TODO: Implement Huffman compression
        // For now, just copy the input
        output.insert(output.end(), input, input + inputSize);
        return true;
    }
}
} 