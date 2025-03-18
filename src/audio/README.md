# Audio System for BeanRecomp

This directory contains the audio system implementation for the BeanRecomp project. The audio system is built on SDL3 and provides support for loading and playing various audio formats, including XACT audio formats used by Xbox 360 games.

## Features

- Platform-agnostic audio interface with SDL3 backend
- Support for common audio formats (WAV, OGG, MP3)
- Support for XACT audio formats (XWB, XSB, XGS)
- Sound playback with volume control and looping
- Multiple simultaneous audio channels
- Wave bank extraction to WAV files
- Audio manager with category-based volume control and muting

## XACT Audio Format Support

The audio system includes a parser for XACT audio formats:

- **XWB (Wave Bank)**: Contains the actual audio data
- **XSB (Sound Bank)**: Contains cue definitions and sound metadata
- **XGS (Global Settings)**: Contains global audio settings

## Usage

### Basic Audio System Usage

```cpp
// Initialize the audio system
AudioSystem::Initialize();

// Load a wave bank
AudioSystem::LoadWaveBank("path/to/wavebankfile.xwb");

// Load a sound bank
AudioSystem::LoadSoundBank("path/to/soundbankfile.xsb");

// Play a cue from the sound bank
int channel = AudioSystem::PlayCue("CueName", false, 1.0f);

// Stop a sound
AudioSystem::StopSound(channel);

// Set volume for a channel
AudioSystem::SetVolume(channel, 0.5f);

// Set master volume
AudioSystem::SetMasterVolume(0.8f);

// Extract waves from a wave bank
AudioSystem::ExtractWaveBank("path/to/wavebankfile.xwb", "output/directory");

// Shutdown the audio system
AudioSystem::Shutdown();
```

### Audio Manager Usage

The audio manager provides a higher-level interface with category-based volume control:

```cpp
// Initialize the audio manager
AudioManager::Initialize("path/to/data/directory");

// Play a sound with category
int channel = AudioManager::PlaySound("CueName", AudioManager::Category::SFX, false, 1.0f);

// Play music (automatically stops previous music)
int musicChannel = AudioManager::PlayMusic("MusicCueName", true, 0.8f);

// Set volume for a category
AudioManager::SetCategoryVolume(AudioManager::Category::Music, 0.7f);

// Mute a category
AudioManager::MuteCategory(AudioManager::Category::SFX, true);

// Set master volume
AudioManager::SetMasterVolume(0.8f);

// Stop all sounds
AudioManager::StopAll();

// Shutdown the audio manager
AudioManager::Shutdown();
```

### Loading Individual Sounds

```cpp
// Load a WAV file
AudioSystem::LoadSound("path/to/sound.wav", "SoundID");

// Play the sound
int channel = AudioSystem::PlaySound("SoundID", true, 1.0f);
```

## Building

The audio system requires SDL3. To build:

```
cmake -B build
cmake --build build
```

## Testing

### Audio System Test

A test program is provided to demonstrate the audio system functionality:

```
./audio_test <wave_bank_file> [sound_bank_file] [cue_name]
```

- If only a wave bank file is provided, it will play the first wave in the bank.
- If a sound bank file is also provided but no cue name, it will extract the wave bank to a directory.
- If all three parameters are provided, it will play the specified cue.

### Audio Manager Test

An interactive test program is provided to demonstrate the audio manager functionality:

```
./audio_manager_test [data_directory]
```

This program provides a menu-driven interface to:
- Play sounds and music
- Stop sounds
- Control volume by category
- Mute/unmute categories
- Set master volume

## Utilities

### Extract Audio Utility

The `extract_audio` utility is provided to search for and extract audio files from the game data:

```
./extract_audio <data_directory> [output_directory]
```

- `data_directory`: Directory containing game data
- `output_directory`: Directory to extract audio files to (default: ./extracted_audio)

The utility will:
1. Recursively search for XACT audio files (.xwb, .xsb, .xgs) in the specified directory
2. Extract waves from wave bank files (.xwb) to WAV files
3. Analyze sound bank files (.xsb) and print cue information
4. Analyze global settings files (.xgs)

This is useful for extracting and analyzing the audio content of the game. 