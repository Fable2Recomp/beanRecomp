# Script to list potential cue names in XACT sound bank files

# Check if the data directory exists
$dataDir = ".\src\data\game"
if (-not (Test-Path $dataDir)) {
    Write-Error "Data directory '$dataDir' not found. Please make sure the directory exists."
    exit 1
}

# Function to extract strings from a binary file
function Extract-Strings {
    param (
        [string]$FilePath,
        [int]$MinLength = 3
    )
    
    if (-not (Test-Path $FilePath)) {
        Write-Error "File '$FilePath' not found."
        return @()
    }
    
    $bytes = [System.IO.File]::ReadAllBytes($FilePath)
    $strings = @()
    $currentString = ""
    
    for ($i = 0; $i -lt $bytes.Length; $i++) {
        $byte = $bytes[$i]
        # Check if the byte is a printable ASCII character
        if ($byte -ge 32 -and $byte -le 126) {
            $currentString += [char]$byte
        } else {
            # End of string
            if ($currentString.Length -ge $MinLength) {
                $strings += $currentString
            }
            $currentString = ""
        }
    }
    
    # Add the last string if it exists
    if ($currentString.Length -ge $MinLength) {
        $strings += $currentString
    }
    
    return $strings
}

# Function to analyze a sound bank file
function Analyze-SoundBank {
    param (
        [string]$FilePath
    )
    
    if (-not (Test-Path $FilePath)) {
        Write-Host "Sound bank file '$FilePath' not found."
        return
    }
    
    Write-Host "Analyzing sound bank: $FilePath"
    $strings = Extract-Strings -FilePath $FilePath -MinLength 3
    
    # Filter potential cue names
    $potentialCueNames = $strings | Where-Object {
        # Filter out common non-cue strings
        -not ($_ -match "Microsoft" -or 
              $_ -match "Windows" -or 
              $_ -match "XACT" -or 
              $_ -match "DirectSound" -or
              $_ -match "Copyright" -or
              $_ -match "^[0-9]+$") -and
        # Ensure it's mostly alphanumeric
        ($_ -match "^[a-zA-Z0-9_]+$")
    } | Sort-Object -Unique
    
    Write-Host "Potential cue names found:"
    foreach ($cueName in $potentialCueNames) {
        Write-Host "  $cueName"
    }
}

# Analyze music sound bank
$musicSoundBank = Join-Path $dataDir "music.xsb"
Analyze-SoundBank -FilePath $musicSoundBank

# Analyze SFX sound bank
$sfxSoundBank = Join-Path $dataDir "sfx.xsb"
Analyze-SoundBank -FilePath $sfxSoundBank 