//CharacterSheet.cpp

/*

Character Sheet Source file

*/

//#includes
#include <iostream>
#include "CharacterSheet.h"
#include <stdlib.h>
#include <time.h>
#include <string>

#include <fstream>

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ios;
using std::ifstream;
using std::fstream;
using std::getline;

//Constructor initializes the sixteen data members
CharacterSheet::CharacterSheet()
{
	name = "Undefined";
	race = "Undefined";
	charClass = "Undefined";
	level = 0;
	background = "Undefined";
	alignment = "Undefined";

	strength = 0;
	dexterity = 0;
	constitution = 0;
	intelligence = 0;
	wisdom = 0;
	charisma = 0;

	proficencyBonus = 0;
	armorClass = 0;
	initiative = 0;
	speed = 0;
}

// ****************************************

//Get the character name
string CharacterSheet::GetName()
{
	return name;
}

//Set the character name
void CharacterSheet::SetName(string newName)
{
	name = newName;
}

//Get the character race
string CharacterSheet::GetRace()
{
	return race;
}

//Set the character race
void CharacterSheet::SetRace(string newRace)
{
	race = newRace;
}

//Get the character class
string CharacterSheet::GetCharClass()
{
	return charClass;
}

//Set the character class
void CharacterSheet::SetCharClass(string newCharClass)
{
	charClass = newCharClass;
}

//Get the character level
int CharacterSheet::GetLevel()
{
	return level;
}

//Set the character level
void CharacterSheet::SetLevel(int newLevel)
{
	level = newLevel;
}

//Get the character background
string CharacterSheet::GetBackground()
{
	return background;
}

//Set the character background
void CharacterSheet::SetBackground(string newBackground)
{
	background = newBackground;
}

//Get the character alignment
string CharacterSheet::GetAlignment()
{
	return alignment;
}

//Set the character alignment
void CharacterSheet::SetAlignment(string newAlignment)
{
	alignment = newAlignment;
}


//Get the character strength
int CharacterSheet::GetStrength()
{
	return strength;
}

//Set the character strength
void CharacterSheet::SetStrength(int newStrength)
{
	strength = newStrength;
}

//Get the character dexterity
int CharacterSheet::GetDexterity()
{
	return dexterity;
}

//Set the character dexterity
void CharacterSheet::SetDexterity(int newDexterity)
{
	dexterity = newDexterity;
}

//Get the character constitution
int CharacterSheet::GetConstitution()
{
	return constitution;
}

//Set the character constitution
void CharacterSheet::SetConstitution(int newConstitution)
{
	constitution = newConstitution;
}

//Get the character intelligence
int CharacterSheet::GetIntelligence()
{
	return intelligence;
}

//Set the character intelligence
void CharacterSheet::SetIntelligence(int newIntelligence)
{
	intelligence = newIntelligence;
}

//Get the character wisdom
int CharacterSheet::GetWisdom()
{
	return wisdom;
}

//Set the character wisdom
void CharacterSheet::SetWisdom(int newWisdom)
{
	wisdom = newWisdom;
}

//Get the character charisma
int CharacterSheet::GetCharisma()
{
	return charisma;
}

//Set the character charisma
void CharacterSheet::SetCharisma(int newCharisma)
{
	charisma = newCharisma;
}

//Get the character proficency bonus
int CharacterSheet::GetProficencyBonus()
{
	return proficencyBonus;
}

//Set the character proficency bonus
void CharacterSheet::SetProficencyBonus(int newProficencyBonus)
{
	proficencyBonus = newProficencyBonus;
}

//Get the character armor class
int CharacterSheet::GetArmorClass()
{
	return armorClass;
}

//Set the character armor class
void CharacterSheet::SetArmorClass(int newArmorClass)
{
	armorClass = newArmorClass;
}

//Get the character initiative
int CharacterSheet::GetInitiative()
{
	return initiative;
}

//Set the character initiative
void CharacterSheet::SetInitiative(int newInitiative)
{
	initiative = newInitiative;
}

//Get the character speed
int CharacterSheet::GetSpeed()
{
	return speed;
}

//Set the character speed
void CharacterSheet::SetSpeed(int newSpeed)
{
	speed = newSpeed;
}

// ****************************************

//Random character race
void CharacterSheet::RandomRace()
{
	int RandIndex = 0;
	srand(time(NULL)); //Initialize the random seed

	const string arrayRaces[24] = 
		{	"Aasimar",
			"Bugbear",
			"Dragonborn",
			"Dwarf",
			"Elf",
			"Firbolg",
			"Genasi",
			"Gnome",
			"Goblin",
			"Goliath",
			"Hafling",
			"Half - Elf",
			"Half - Orc",
			"Hobgoblin",
			"Human",
			"Kenku",
			"Kobold",
			"Lizardfolk",
			"Orc",
			"Tabaxi",
			"Tiefling",
			"Tortle",
			"Triton",
			"Yuan - Ti"
		};

	RandIndex = rand() % 24; //generates a random number for array index
	race = arrayRaces[RandIndex];
}

//Random character race Season 10
void CharacterSheet::RandomRaceS10()
{
	int RandIndex = 0;
	srand(time(NULL)); //Initialize the random seed

	const string arrayRaces[16] =
	    {   "Aasimar",
			"Dragonborn",
			"Dwarf",
			"Elf",
			"Firbolg",
			"Genasi",
			"Gnome",
			"Goliath",
			"Hafling",
			"Half - Elf",
			"Half - Orc",
			"Human",
			"Kobold",
			"Tabaxi",
			"Tiefling",
			"Tortle"
		};

	RandIndex = rand() % 16; //generates a random number for array index
	race = arrayRaces[RandIndex];
}

//Random NPC race
void CharacterSheet::RandomNPCRace()
{
	int RandIndex = 0;
	srand(time(NULL)); //Initialize the random seed

	const string arrayRaces[36] =
	   {	"Aasimar",
			"Bugbear",
			"Centaur",
			"Changeling",
			"Dragonborn",
			"Dwarf",
			"Elf",
			"Firbolg",
			"Genasi",
			"Gith",
			"Gnome",
			"Goblin",
			"Goliath",
			"Hafling",
			"Half - Elf",
			"Half - Orc",
			"Hobgoblin",
			"Human",
			"Kalashtar",
			"Kenku",
			"Kobold",
			"Lizardfolk",
			"Locathah",
			"Loxodon",
			"Minotaur",
			"Orc",
			"Shifter",
			"Simic Hybrid",
			"Tabaxi",
			"Tiefling",
			"Tortle",
			"Triton",
			"Vedalken",
			"Verdan",
			"Warforged",
			"Yuan - Ti"
	    };

	RandIndex = rand() % 36; //generates a random number for array index
	race = arrayRaces[RandIndex];
}

//Random character class
void CharacterSheet::RandomCharClass()
{
	int RandIndex = 0;
	srand(time(NULL)); //Initialize the random seed

	const string arrayCharClass[12] =
	{	"Barbarian",
		"Bard",
		"Cleric",
		"Druid",
		"Fighter",
		"Monk",
		"Paladin",
		"Ranger",
		"Rogue",
		"Sorcerer",
		"Warlock",
		"Wizard"
	};

	RandIndex = rand() % 12; //generates a random number for array index
	charClass = arrayCharClass[RandIndex];
}

// Random character background
void CharacterSheet::RandomBackground()
{
	int RandIndex = 0;
	srand(time(NULL)); //Initialize the random seed

	const string arrayBackground[25] =
	{	"Acolyte",
		"Charlatan",
		"Criminal",
		"Entertainer",
		"Folk Hero",
		"Guild Artisan",
		"Hermit",
		"Noble",
		"Outlander",
		"Sage",
		"Sailor",
		"Soldier",
		"Urchin",
		"City Watch",
		"Clan Crafter",
		"Cloistered Scholar",
		"Coutier",
		"Faction Agent",
		"Far Traveler",
		"Inheritor",
		"Knight of the Order",
		"Mercenary Veteran",
		"Urban Bounty Hunter",
		"Uthgardt Tribe Member",
		"Waterdhavian Noble"
	};

	RandIndex = rand() % 25; //generates a random number for array index
	background = arrayBackground[RandIndex];
}

//Random NPC alignment
void CharacterSheet::RandomAlignment()
{
	srand(time(NULL)); //Initialize the random seed

	const string arrayAlignment[9] =
	{	"Lawful Good",
		"Neutral Good",
		"Chaotic Good",
		"Lawful Neutral",
		"Neutral",
		"Chaotic Neutral",
		"Lawful Evil",
		"Neutral Evil",
		"Chaotic Evil"
	};

	int RandIndex = rand() % 9; //generates a random number for array index
	alignment = arrayAlignment[RandIndex];
}

//Random AL legal character alignment, Seasons 1-9
void CharacterSheet::RandomAlignmentAL()
{
	srand(time(NULL)); //Initialize the random seed

	const string arrayAlignment[7] =
	{ "Lawful Good",
	"Neutral Good",
	"Chaotic Good",
	"Lawful Neutral",
	"Neutral",
	"Chaotic Neutral",
	"Lawful Evil",
	};

	int RandIndex = rand() % 7; //generates a random number for array index
	alignment = arrayAlignment[RandIndex];
}

//Random AL legal character alignment, Season 10
void CharacterSheet::RandomAlignmentALS10()
{
	srand(time(NULL)); //Initialize the random seed

	const string arrayAlignment[6] =
	{ "Lawful Good",
	"Neutral Good",
	"Chaotic Good",
	"Lawful Neutral",
	"Neutral",
	"Chaotic Neutral",
	};

	int RandIndex = rand() % 6; //generates a random number for array index
	alignment = arrayAlignment[RandIndex];
}

//Choose random name from appropiate list based on race
string CharacterSheet::NameByRace()
{
	string raceForName = GetRace();
	string nameDoc;
	string listName;
	string newName;

	//Choose correct name doc based on race
	if (raceForName == "Aasimar")
	{		
		nameDoc = "RandomNameDocs/Aasimar.txt";		
	}
	if (raceForName == "Bugbear")
	{
		nameDoc = "RandomNameDocs/Bugbear.txt";
	}
	if (raceForName == "Centaur")
	{
		nameDoc = "RandomNameDocs/Centaur.txt";
	}
	if (raceForName == "Changeling")
	{
		nameDoc = "RandomNameDocs/Changeling.txt";
	}
	if (raceForName == "Dragonborn")
	{
		nameDoc = "RandomNameDocs/Dragonborn.txt";
	}
	if (raceForName == "Dwarf")
	{
		nameDoc = "RandomNameDocs/Dwarf.txt";
	}
	if (raceForName == "Elf")
	{
		nameDoc = "RandomNameDocs/Elf.txt";
	}
	if (raceForName == "Firbolg")
	{
		nameDoc = "RandomNameDocs/Firbolg.txt";
	}
	if (raceForName == "Genasi")
	{
		nameDoc = "RandomNameDocs/Genasi.txt";
	}
	if (raceForName == "Gith")
	{
		nameDoc = "RandomNameDocs/Gith.txt";
	}
	if (raceForName == "Gnome")
	{
		nameDoc = "RandomNameDocs/Gnome.txt";
	}
	if (raceForName == "Goblin")
	{
		nameDoc = "RandomNameDocs/Goblin.txt";
	}
	if (raceForName == "Goliath")
	{
		nameDoc = "RandomNameDocs/Goliath.txt";
	}
	if (raceForName == "Hafling")
	{
		nameDoc = "RandomNameDocs/Hafling.txt";
	}
	if (raceForName == "Half - Elf")
	{
		nameDoc = "RandomNameDocs/HalfElf.txt";
	}
	if (raceForName == "Half - Orc")
	{
		nameDoc = "RandomNameDocs/HalfOrc.txt";
	}
	if (raceForName == "Hobgoblin")
	{
		nameDoc = "RandomNameDocs/Hobgoblin.txt";
	}
	if (raceForName == "Human")
	{
		nameDoc = "RandomNameDocs/Human.txt";
	}
	if (raceForName == "Kalashtar")
	{
		nameDoc = "RandomNameDocs/Kalashtar.txt";
	}
	if (raceForName == "Kenku")
	{
		nameDoc = "RandomNameDocs/Kenku.txt";
	}
	if (raceForName == "Kobold")
	{
		nameDoc = "RandomNameDocs/Kobold.txt";
	}
	if (raceForName == "Lizardfolk")
	{
		nameDoc = "RandomNameDocs/Lizardfolk.txt";
	}
	if (raceForName == "Locathah")
	{
		nameDoc = "RandomNameDocs/Locathah.txt";
	}
	if (raceForName == "Loxodon")
	{
		nameDoc = "RandomNameDocs/Loxodon.txt";
	}
	if (raceForName == "Minotaur")
	{
		nameDoc = "RandomNameDocs/Minotaur.txt";
	}
	if (raceForName == "Orc")
	{
		nameDoc = "RandomNameDocs/Orc.txt";
	}
	if (raceForName == "Shifter")
	{
		nameDoc = "RandomNameDocs/Shifter.txt";
	}
	if (raceForName == "Simic Hybrid")
	{
		nameDoc = "RandomNameDocs/SimicHybrid.txt";
	}
	if (raceForName == "Tabaxi")
	{
		nameDoc = "RandomNameDocs/Tabaxi.txt";
	}
	if (raceForName == "Tiefling")
	{
		nameDoc = "RandomNameDocs/Tiefling.txt";
	}
	if (raceForName == "Tortle")
	{
		nameDoc = "RandomNameDocs/Tortle.txt";
	}
	if (raceForName == "Triton")
	{
		nameDoc = "RandomNameDocs/Triton.txt";
	}
	if (raceForName == "Vedalken")
	{
		nameDoc = "RandomNameDocs/Vedalken.txt";
	}
	if (raceForName == "Verdan")
	{
		nameDoc = "RandomNameDocs/Verdan.txt";
	}
	if (raceForName == "Warforged")
	{
		nameDoc = "RandomNameDocs/Warforged.txt";
	}
	if (raceForName == "Yuan - Ti")
	{
		nameDoc = "RandomNameDocs/YuanTi.txt";
	}

	//Create array of available names and choose one randomly
	string arrayNameList[24];	
	ifstream RandomNameDoc (nameDoc);
	int i;

	srand(time(NULL) + time(NULL)); //Initialize the random seed

	if (RandomNameDoc.is_open())
	{
		i = 0;
		while (getline(RandomNameDoc, listName))
		{
			arrayNameList[i] = listName;
			i += 1;
		}
		RandomNameDoc.close();
	}

	int RandIndex = rand() % 24; //generates a random number for array index
	newName = arrayNameList[RandIndex];

	return newName;
}

// ****************************************

//Print character details to the screen
void CharacterSheet::PrintDetails()
{	
	cout << "\nName: " << GetName();
	cout << "\nRace: " << GetRace();
	cout << "\nClass: " << GetCharClass();
	cout << "\nLevel: " << GetLevel();
	cout << "\nBackground: " << GetBackground();
	cout << "\nAlignment: " << GetAlignment();

	cout << "\nStrength: " << GetStrength();
	cout << "\nDexterity: " << GetDexterity();
	cout << "\nConstitution: " << GetConstitution();
	cout << "\nIntelligence: " << GetIntelligence();
	cout << "\nWisdom: " << GetWisdom();
	cout << "\nCharisma: " << GetCharisma();

	cout << "\nProficency Bonus: " << GetProficencyBonus();
	cout << "\nArmor Class: " << GetArmorClass();
	cout << "\nInitiative: " << GetInitiative();
	cout << "\nSpeed: " << GetSpeed();
}

//Print limited character details to the screen
void CharacterSheet::PrintLimitedDetails()
{
	cout << "\n\nName: " << GetName();
	cout << "\nRace: " << GetRace();
	cout << "\nClass: " << GetCharClass();
	cout << "\nLevel: " << GetLevel();
	cout << "\nBackground: " << GetBackground();
	cout << "\nAlignment: " << GetAlignment();
}
