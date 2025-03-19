#pragma once

#include <vector>
#include <cstdint>
#include <string>

namespace BeanRecomp
{
namespace PPC
{
    class Decompressor
    {
    public:
        enum class CompressionType
        {
            NONE,
            LZ77,
            RLE,
            HUFFMAN,
            YAZ0,
            YAY0
        };

        struct CompressionHeader
        {
            uint32_t magic;
            uint32_t decompressedSize;
            uint32_t compressedSize;
            CompressionType type;
        };

        static bool Decompress(const uint8_t* input, size_t inputSize, 
                             std::vector<uint8_t>& output);
        static bool Compress(const uint8_t* input, size_t inputSize,
                           std::vector<uint8_t>& output, CompressionType type);
        
        static bool DetectCompression(const uint8_t* input, size_t inputSize,
                                    CompressionType& type);
        static bool ValidateHeader(const CompressionHeader& header);

    private:
        static bool DecompressLZ77(const uint8_t* input, size_t inputSize,
                                  std::vector<uint8_t>& output);
        static bool DecompressRLE(const uint8_t* input, size_t inputSize,
                                 std::vector<uint8_t>& output);
        static bool DecompressHuffman(const uint8_t* input, size_t inputSize,
                                     std::vector<uint8_t>& output);
        static bool DecompressYAZ0(const uint8_t* input, size_t inputSize,
                                  std::vector<uint8_t>& output);
        static bool DecompressYAY0(const uint8_t* input, size_t inputSize,
                                  std::vector<uint8_t>& output);

        static bool CompressLZ77(const uint8_t* input, size_t inputSize,
                                std::vector<uint8_t>& output);
        static bool CompressRLE(const uint8_t* input, size_t inputSize,
                               std::vector<uint8_t>& output);
        static bool CompressHuffman(const uint8_t* input, size_t inputSize,
                                   std::vector<uint8_t>& output);
    };
}
} 