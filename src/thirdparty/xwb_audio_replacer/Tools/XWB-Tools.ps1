###############################
######## Tool Functions #######
###############################

# Welcome message
function Set-WelcomeMessage {
    param (
        $ScriptName
    )
    Clear-Host
    Write-Host "Welcome to $ScriptName of the XwbAudioReplacer Project!" -ForegroundColor blue
    Write-Host "Credits -> Think: Steve2811 | Create: astrogab42 | Support: Piero-93" -ForegroundColor green
}

# Basic logging
function Write-HostError {
    param (
        $Text
    )
    Write-Host "ERROR`t$Text" -ForegroundColor Red
}

function Write-HostWarn {
    param (
        $Text
    )
    Write-Host "WARN`t$Text" -ForegroundColor Yellow
}

function Write-HostInfo {
    param (
        $Text
    )
    Write-Host "INFO`t$Text" # -ForegroundColor Blue
}

# Check folder existance and ask user to or not to create it
function Assert-FolderExists {
    param (
        $Folder
    )

    #Write-HostInfo -Text "Check existance of $Folder."
    if (-not(Test-Path $Folder)) {
        # if the folder does not exists
        Write-HostWarn -Text "The path you selected does not exists."
        Write-HostInfo -Text "Path: $Folder"

        $Output = $false
                
        <# DEPRECATED
        $Title = ""
        $Message = "Do you want to create it?"
        $Options = "&Yes", "&No"
        $Default = 1  # 0=Yes, 1=No
        do {
            $Response = $Host.UI.PromptForChoice($Title, $Message, $Options, $Default)
            if ($Response -eq 0) {
                Write-HostInfo -Text "Creating new folder..."
                New-Item -Path $Folder -ItemType Directory
            }
            else {
                Write-HostError -Text "It is impossibile to continue. The script will be stopped."
                exit
            }
        } until ($Response -eq $Default -Or (Test-Path $Folder))
        #>
    }
    else {
        #Write-HostInfo -Text "$Folder exists!"
        $Output = $true
    }

    return $Output
}

# Check file existance 
function Assert-FileExists {
    param (
        $File
    )

    #Write-HostInfo -Text "Check existance of $File"
    if (-not(Test-Path $File)) {
        # if the file does not exists
        Write-HostWarn -Text "The path you selected for your file does not exists."
        Write-HostInfo -Text "Path: $File"

        $Output = $false

        <# DEPRECATED
        Write-HostError -Text "It is impossibile to continue. The script will be stopped."
        exit
        #>
    }
    else {
        #Write-HostInfo -Text "$File exists!"
        $Output = $true
    }
    
    return $Output
}
