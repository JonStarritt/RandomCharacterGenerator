# Random Character Generator
Random Character Generator is a simple, text based console program for generating random characters and NPCs for the Dungeons and Dragons tabletop roleplaying game. 

## Features
#### Create two types of player characters using "Adventurers League" rules and NPCs. 
1. Adventurers League Seasons 1-9
2. Adventurers League Season 10

#### Save randomly generated characters to the appropriate list for future reference.

## Installation

### Quick Start Steps
1. Download the Zip file.
2. Unzip it to a folder on your computer.

### Detailed Instructions to build from source
1. Download the Zip file.
2. Unzip it to a folder on your computer.
3. Open the "SourceCode" folder.
4. Use your preferred method to compile and build the ".exe" from the three source code files:
   1. main.cpp
   2. CharacterSheet.cpp
   3. CharacterSheet.h

## Usage

### Quick Start Steps
1. Open the "Executable" folder.
2. Run the program by double clicking on "TTRPGCharacterBuilder.exe".
3. Characters you choose to save are located in the the appropiate document in the "SavedNameLists" folder which is in the "Executable" folder.

#### If the Random Character Generator does not run on your computer, you may need to run the "vcredist_x86.exe" file from the "Redistributable" folder. It is a file directly from Microsoft for running C++ code on computers without Visual Studio installed.


### Detailed Instructions 
1. Copy the "RandomNameDocs" and "SavedNameLists" folders into the same location as the ".exe" you built from source.
2. Run the ".exe".
3. Characters you choose to save are located in the the appropiate document in the "SavedNameLists" folder which you copied to the location of the ".exe".

#### If the Random Character Generator does not run on your computer, you may need to run the "vcredist_x86.exe" file from the "Redistributable" folder. It is a file directly from Microsoft for running C++ code on computers without Visual Studio installed.

## Customizing data for generated characters

### Characer Names
To customize the names used for generating characters you may freely edit the appropiate name list based on race. Each name list has 24 unique names, and must have 24 names for the character generator to work properly. Once you make any changes, make sure to save the name list so the customized names will be available the next time you run the Random Character Generator.

## Example Screenshots
![Image] ReadmeImages/MainMenu.png

## Roadmap
* Add randomly generated subclasses -- **Done**
* Add the ability to randomly generate ability scores based on the character's race and class
* Modify the random name generation to not need a set number of names on the list
* Whatever else I think to add

## Contributing
For errors and changes, please open an issue to discuss the error or what you would like to change.

## License
[GNU LGPLv3](https://choosealicense.com/licenses/lgpl-3.0/)
