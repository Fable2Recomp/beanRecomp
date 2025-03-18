########################################
######## Configuration Functions #######
########################################

# Set configuration for script
function Set-Configuration {
    param (
        $ConfigFile
    )

    $OriginalWavPath = (Read-Host "Set the path containing the WAV files extracted from the XWB file with XWBExtractor.ps1").Replace("`"", "")
    $CustomWavPath = (Read-Host "Set the path that will contain the user's audio files").Replace("`"", "")
    $XwbPath = (Read-Host "Set the path to the XWB file inside the game folder").Replace("`"", "")
    $GameExePath = (Read-Host "Set the path to the exe file of the game launcher").Replace("`"", "")
    
    $RunGameOptions = @(
        [System.Management.Automation.Host.ChoiceDescription]::new("&Yes", "The game will be run after script execution.")
        [System.Management.Automation.Host.ChoiceDescription]::new("&No", "The game will NOT be run after script execution.")
    )
    $RunGameDefault = 0  # 0=Yes, 1=No
    $RunGameBool = $Host.UI.PromptForChoice("","Do you want to run the game at the end of the script?", $RunGameOptions, $RunGameDefault)
    if ($RunGameBool -eq $RunGameDefault) {
        $RunGame = $false
    }
    else {
        $RunGame = $true
    }
    
    <# DEPRECATED
    # Get configuration
    $RunGame = $false; # You want to run the game at the end of the script - $true/$false
    $OriginalWavPath = "C:\MISE-ITA\MISE-ITA-Master\Dialoghi\Tracce-WAV" # "Original Folder"
    $CustomWavPath = "C:\MISE-ITA\MISE-ITA-Master\Dialoghi\Dubbed-Folder" # "Dubbed Folder"
    $XwbPath = "C:\MISE-ITA\MISE-ITA-Master\originalSpeechFiles\Speech.xwb"
    $GameExePath = "C:\GOG Games\Monkey Island 1 SE\MISE.exe"
    $GameAudioPath = "C:\GOG Games\Monkey Island 1 SE\audio"
    $DeleteModeWaves = $false; # You want to delete the "Repacker Folder" - $true/$false
    #>
    
    # Store configuration to file
    Add-Content -Path $ConfigFile -Value $OriginalWavPath, $CustomWavPath, $XwbPath, $GameExePath, $RunGame
}

# Edit config file
function Edit-Configuration {
    param (
        $ConfigKey,
        $ConfigFile,
        [int16]$Index
    )

    if ($ConfigKey -eq "RunGame") {
        # Specific case to match true/false values
        do {
            $Prompt = Read-Host "What is the new value? [True/False]" # Prompt user to insert new value from keyboard 
        } until ($Prompt -eq "True" -Or $Prompt -eq "False")

        if ($Prompt -eq "False") {
            $Output = $false
        }
        else {
            $Output = $true
        }
    }
    else {
        if ($Index -eq 1 -or $Index -eq 2) {
            do {
                $Output = (Read-Host "Please, enter the new value").Replace("`"", "") # Prompt user to insert new value from keyboard
            } until (Assert-FolderExists -Folder $Output)
        }
        elseif ($Index -eq 3 -or $Index -eq 4) {
            do {
                $Output = (Read-Host "Please, enter the new value").Replace("`"", "") # Prompt user to insert new value from keyboard
            } until (Assert-FileExists -File $Output)
        }
    }

    $Content = Get-Content $ConfigFile # Get file content and store it into variable
    $Content[$Index - 1] = $Output # Replace the line number 0 by a new text
    $Content | Set-Content $ConfigFile # Set the new content

    return $Output
}

# Build config table to be shown the user on screen
function Build-ConfigTable {
    param (
        [int16[]]$TableId,
        [string[]]$TableKey,
        [string[]]$TableVal
    )

    $ConfigTable = for ($i = 0; $i -lt $max; $i++) {
        [PSCustomObject]@{
            ID        = $TableId[$i]
            Parameter = $TableKey[$i]
            Value     = $TableVal[$i]
        }
    }

    return $ConfigTable
}

# Print Config to user
function Show-Config {
    param (
        $ConfigTable
    )

    Clear-Host

    # Welcome Message
    Set-WelcomeMessage -ScriptName "XWB-Repacker"
    
    # Show config to user
    Write-HostInfo -Text "This is your current configuration:"
    $ConfigTable | Format-Table
}