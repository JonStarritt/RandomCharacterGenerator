//main.cpp

/*

Character creator for Dungeons and Dragons.

This program allows the user to create a character for Dungeons and Dragons using
character creation rules for the Adventeurers League. Three types of characters
can be created: AL Season 1-9, AL Season 10, and NPCs.

*/

//#includes
#include <iostream>
#include "CharacterSheet.h"
#include <ctype.h>
#include <iomanip>
#include <string>

#include <iostream>
#include <fstream>

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;
using std::setw;
using std::left;
using std::right;

//Prototypes
void mainMenu();
void GenerateRandomALChar();
void GenerateRandomALCharS10();
void GenerateRandomNPC();
void SaveNextQuitMenu();
void SaveToFile();

//Global Vars
int mainMenuChoice;
CharacterSheet NewCharacter;


int main()
{
	cout << "Welcome to the Character Creator!\n\n";
	mainMenu();	

	return 0;
}

//Main menu with switch for user selection
void mainMenu()
{	
	cout << "Please select from the following options: \n\n";

	cout << "[1] Generate a random \"Adventurers League\" Season 1-9 legal character\n";
	cout << "[2] Generate a random \"Adventurers League\" Season 10 legal character\n";
	cout << "[3] Generate a random NPC\n";
	cout << "[4] Quit\n";
	cout << "Make a selection and press [ENTER]: ";
	cin >> mainMenuChoice;

	switch (mainMenuChoice)
	{
	case 1: {cout << "\n\nGenerating random AL Season 1-9 character...";	//Generate character for Seasons 1-9
			 GenerateRandomALChar();
			}
			break;

	case 2: {cout << "\n\nGenerating random AL Season 10 character...";		//Generate character for Season 10
			 GenerateRandomALCharS10();
			}
			break;

	case 3: {cout << "\n\nGenerating random NPC...";						//Generate NPC
			 GenerateRandomNPC();
			}
		    break;

	case 4: break;

	default: cout << "Invalid choice.\n";
	}
}


//Generate character object for Seasons 1-9 using randomized details,
//and print the details to the screen.
void GenerateRandomALChar()
{
	{
		NewCharacter.SetLevel(1);
		
		NewCharacter.RandomRace();
		
		NewCharacter.SetName(NewCharacter.NameByRace());

		NewCharacter.RandomCharClass();

		NewCharacter.SetCharSubClass(NewCharacter.SubByClass());

		

		NewCharacter.RandomBackground();

		NewCharacter.RandomAlignmentAL();

		NewCharacter.RandomAbilityScores();



		NewCharacter.RacialBonuses();

		NewCharacter.CalcSubraceBonus();

		NewCharacter.CalcAbilityScoreMods();

		NewCharacter.CalcProficencyBonus();		

		NewCharacter.CalcInitiative();



		NewCharacter.CalcArmorType();
		
		NewCharacter.CalcArmorClass();

		NewCharacter.CalcSpeed();		

		NewCharacter.PrintDetails();
		
		SaveNextQuitMenu();
	}

}

//Generate character object for Season 10 using randomized details,
//and print the details to the screen.
void GenerateRandomALCharS10()
{
	{
		NewCharacter.SetLevel(1);

		NewCharacter.RandomRaceS10();

		NewCharacter.SetName(NewCharacter.NameByRace());

		NewCharacter.RandomCharClass();

		NewCharacter.SetCharSubClass(NewCharacter.SubByClass());



		NewCharacter.RandomBackground();

		NewCharacter.RandomAlignmentALS10();

		NewCharacter.RandomAbilityScores();



		NewCharacter.RacialBonuses();

		NewCharacter.CalcSubraceBonus();

		NewCharacter.CalcAbilityScoreMods();

		NewCharacter.CalcProficencyBonus();

		NewCharacter.CalcInitiative();



		NewCharacter.CalcArmorType();

		NewCharacter.CalcArmorClass();

		NewCharacter.CalcSpeed();

		NewCharacter.PrintDetails();

		SaveNextQuitMenu();
	}

}

//Generate character object for a NPC using randomized details,
//and print the details to the screen.
void GenerateRandomNPC()
{
	{
		NewCharacter.SetLevel(1);

		NewCharacter.RandomNPCRace();

		NewCharacter.SetName(NewCharacter.NameByRace());

		NewCharacter.RandomCharClass();

		NewCharacter.SetCharSubClass(NewCharacter.SubByClass());



		NewCharacter.RandomBackground();

		NewCharacter.RandomAlignment();

		NewCharacter.RandomAbilityScores();



		NewCharacter.RacialBonuses();

		NewCharacter.CalcSubraceBonus();

		NewCharacter.CalcAbilityScoreMods();

		NewCharacter.CalcProficencyBonus();

		NewCharacter.CalcInitiative();



		NewCharacter.CalcArmorType();

		NewCharacter.CalcArmorClass();

		NewCharacter.CalcSpeed();

		NewCharacter.PrintDetails();

		SaveNextQuitMenu();
	}
}

//Universal menu for saving a character to a list, continuing to the next character,
//returning to the main menu, or quitting the application.
void SaveNextQuitMenu()
{
	char saveNextQuitChar;
	
	cout << "\n\n[S]ave ~ [N]ext Character ~ [M]ain menu";
	cout << "\nMake a selection and press [ENTER]: ";
	cin >> saveNextQuitChar;

	switch (toupper(saveNextQuitChar))								//Using "toupper" to receive lower and uppercase letters
	{
	case 'S': {cout << "\nSaving character to the list...\n";
		       
			   SaveToFile();
			   SaveNextQuitMenu();

			  }
		break;

	case 'N': {
				if (mainMenuChoice == 1)
					{
						cout << "\n\nGenerating next AL Season 1-9 character...";
						GenerateRandomALChar();
					}

				if (mainMenuChoice == 2)
					{
						cout << "\n\nGenerating next AL Season 10 character...";
						GenerateRandomALCharS10();
					}

				if (mainMenuChoice == 3)
					{
						cout << "\n\nGenerating next NPC...";
						GenerateRandomNPC();
					}				
			  }
		break;

	case 'M': {
				cout << "\n\n\n\n\n\n";
				mainMenu();
			  }		
	
		break;

	case 'Q': break;

	default: cout << "Invalid choice.\n";
	}

}

//Save character details to a text doc. A seperate doc for each
//type of character, AL Seasons 1-9, AL Season 10, and NPC.
void SaveToFile()
{
	ofstream ALCharList;

	if (mainMenuChoice == 1)
	{
		ALCharList.open("SavedNameLists/0_AL1to9CharList.txt", ios::app);
	}

	else if (mainMenuChoice == 2)
	{
		ALCharList.open("SavedNameLists/0_AL10CharList.txt", ios::app);
	}

	else if (mainMenuChoice == 3)
	{
		ALCharList.open("SavedNameLists/0_NPCList.txt", ios::app);
	}

	ALCharList << "\n\n***********************************************************************************" << "\n"
		<< "*Name: " << left << setw(33) << NewCharacter.GetName() << "\tLevel: " << NewCharacter.GetLevel()
		<< "\n*Race: " << left << setw(12) << NewCharacter.GetRace() << "\t\t\t\tSubrace: " << left << setw(30) << NewCharacter.GetSubrace()
		<< "\n*Class: " << left << setw(9) << NewCharacter.GetCharClass() << "\t\t\t\tSubclass: " << left << setw(30) << NewCharacter.GetCharSubClass()
		<< "\n*Background: " << left << setw(21) << NewCharacter.GetBackground() << "\t\tAlignment: " << left << setw(15) << NewCharacter.GetAlignment()
		<< "\n*---------------------------------------------------------------------------------" << "\n"
		<< "*Armor Type: " << NewCharacter.GetArmorType() << "\t\t\t\tArmor Class: " << NewCharacter.GetArmorClass()
		<< "\n*Initiative: " << NewCharacter.GetInitiative() << "\t\t\t\t\tSpeed: " << NewCharacter.GetSpeed()
		<< "\n*Proficency Bonus: " << NewCharacter.GetProficencyBonus() 
		<< "\n*---------------------------------------------------------------------------------" << "\n"
		<< "*Strength: " << NewCharacter.GetStrength() << "\t\t\t\t\tIntelligence: " << NewCharacter.GetIntelligence()
		<< "\n*Dexterity: " << NewCharacter.GetDexterity() << "\t\t\t\t\tWisdom: " << NewCharacter.GetWisdom()
		<< "\n*Constitution: " << NewCharacter.GetConstitution() << "\t\t\t\tCharisma: " << NewCharacter.GetCharisma()
		<< "\n***********************************************************************************";
	ALCharList.close();
}

