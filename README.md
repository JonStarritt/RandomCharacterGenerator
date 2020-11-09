# Random Character Generator
Random Character Generator is a simple, text based console program for generating random player characters and non-player characters (NPCs) for the Dungeons and Dragons (D&D) tabletop roleplaying game. 

## Purpose
The initial purpose for this program was to help Dungeon Masters (DM) quickly generate NPCs without having to manualy calculate ability scores and armor classes. Since beginning development, the purpose has expanded to include being a source of inspiration for anyone creating a D&D character.

Once a character is generated, the player or DM can create a backstory and use the randomly generated character, or use the generated character as inspiration and modify any of the details to better fit the theme or story of the adventure.

## Features
* #### Quickly iterate through creating random characters for both player and DM use.

* #### Create two types of player characters using "Adventurers League" (AL) rules and NPCs. 
   * Adventurers League Seasons 1-9
   * Adventurers League Season 10
   * Non-player Characters (NPC)

* #### Randomly generated ability scores and armor types, modified based on race, subrace, class, and subclass.

* #### Save randomly generated character data to a list for future reference.

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
1. Copy the "RandomNameDocs", "SavedNameLists", and "SubclassDocs" folders into the same location as the ".exe" you built from source.
2. Run the ".exe".
3. Characters you choose to save are located in the the appropiate document in the "SavedNameLists" folder which you copied to the location of the ".exe".

#### If the Random Character Generator does not run on your computer, you may need to run the "vcredist_x86.exe" file from the "Redistributable" folder. It is a file directly from Microsoft for running C++ code on computers without Visual Studio installed.

## Character Race and Alignment
Adventurers League restrictions for the character's race and alignment have been implemented. Player characters have less options available for Season 10 (Starting September 2020) than they do for Season 9 (Starting September 2019) and older seasons of adventure.

However when creating an NPC, all of the official race and alignment options are available as NPCs are not season locked like player characters.

## Ability Scores/Armor Class/Proficency Bonus/Initiative/Speed
The ability scores use the standard array (15, 14, 13, 12, 10, 8) found in the Player's Handbook (PHB) per AL rules. The scores are generated with '15' and '14' being set to the primary and secondary abilities, respectively, based on the class descriptions in the PHB. The other scores (13, 12, 10, 8) are randomized and set to the remaining abilities. The ability scores are modified further by the character's race and subrace bonuses, if applicable. 

Armor type and armor class are based on the starting equipment listed in the PHB for each character class. If a class has multiple options for starting armor, like the Cleric, the available options are randomized before an armor type is selected and the armor class calculated.

Proficency bonus is based on character level, and follows the character advancement as detailed in the PHB.

Initiative is based on the Dexterity modifier.

Speed is taken directly from the race descriptions in their respective source book.

## Customizing data for generated characters

### Characer Names
To customize the names used for generating characters you may freely edit the appropiate name list based on race. Each name list has 24 unique names, and must have 24 names for the character generator to work properly. Once you make any changes, make sure to save the name list so the customized names will be available the next time you run the Random Character Generator.

## Example Screenshots
### Main Menu
![Main Menu](https://github.com/JonStarritt/RandomCharacterGenerator/blob/main/ReadmeImages/MainMenu.png)

### Generating AL character
![AL Character](https://github.com/JonStarritt/RandomCharacterGenerator/blob/main/ReadmeImages/ALCharacter20201108.png)

### Saving random character
![Save Character](https://github.com/JonStarritt/RandomCharacterGenerator/blob/main/ReadmeImages/SaveCharacter20201108.png)

### Creating another character
![Next Character](https://github.com/JonStarritt/RandomCharacterGenerator/blob/main/ReadmeImages/NextCharacter20201108.png)

### List of saved characters
![Character List](https://github.com/JonStarritt/RandomCharacterGenerator/blob/main/ReadmeImages/CharacterList20201108.png)

## Roadmap
* Add randomly generated subclasses -- **Done**
* Add the ability to randomly generate ability scores based on the character's race and class -- **Done**
* Calculate ability score modifiers based on race and class -- **Done**
* Add Armor class and Armor types -- **Done**
* Reformat the output both on screen and in the saved data files -- **Done**
* Modify the random name generation to not need a set number of names on the list
* Whatever else I think to add

## Contributing
For errors and changes, please open an issue to discuss the error or what you would like to change.

## License
[GNU LGPLv3](https://choosealicense.com/licenses/lgpl-3.0/)
