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
#include <vector>
#include <algorithm>       


//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ios;
using std::ifstream;
using std::fstream;
using std::getline;
using std::vector;
using std::random_shuffle;

//Constructor initializes the sixteen data members
CharacterSheet::CharacterSheet()
{
	name = "Undefined";
	race = "Undefined";
	charClass = "Undefined";
	charSubClass = "Undefined";
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

	strMod = 0;
	dexMod = 0;
	conMod = 0;
	intMod = 0;
	wisMod = 0;
	charMod = 0;
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

//Get the character subrace
string CharacterSheet::GetSubrace()
{
	return subrace;
}

//Set the character subrace
void CharacterSheet::SetSubrace(string newSubrace)
{
	subrace = newSubrace;
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

//Get the character subclass
string CharacterSheet::GetCharSubClass()
{
	return charSubClass;
}

//Set the character subclass
void CharacterSheet::SetCharSubClass(string newCharSubClass)
{
	charSubClass = newCharSubClass;
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

//Get the armor type
string CharacterSheet::GetArmorType()
{
	return armorType;
}

//Set the armor type
void CharacterSheet::SetArmorType(string newArmorType)
{
	armorType = newArmorType;
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

//Choose random subclass from appropiate list based on class
string CharacterSheet::SubByClass()
{
	string subForClass = GetCharClass();
	string subclassDoc;
	string listSubclass;
	string newSubclass;

	//Choose correct subclass doc based on class
	if (subForClass == "Barbarian")
	{
		subclassDoc = "SubclassDocs/BarbarianSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 6;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];

	}
	if (subForClass == "Bard")
	{
		subclassDoc = "SubclassDocs/BardSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 8;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];

	}

	if (subForClass == "Cleric")
	{
		subclassDoc = "SubclassDocs/ClericSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 10;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Druid")
	{
		subclassDoc = "SubclassDocs/DruidSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 5;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Fighter")
	{
		subclassDoc = "SubclassDocs/FighterSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 7;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Monk")
	{
		subclassDoc = "SubclassDocs/MonkSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 7;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Paladin")
	{
		subclassDoc = "SubclassDocs/PaladinSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 6;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Ranger")
	{
		subclassDoc = "SubclassDocs/RangerSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 5;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Rogue")
	{
		subclassDoc = "SubclassDocs/RogueSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 7;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Sorcerer")
	{
		subclassDoc = "SubclassDocs/SorcererSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 5;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Warlock")
	{
		subclassDoc = "SubclassDocs/WarlockSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 5;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}
	if (subForClass == "Wizard")
	{
		subclassDoc = "SubclassDocs/WizardSubclass.txt";

		//Create array of available subclasses and choose one randomly
		const int arrayNumConst = 10;
		string arraySubclassList[arrayNumConst];
		ifstream RandomSubDoc(subclassDoc);
		int j;

		srand(time(NULL) + time(NULL)); //Initialize the random seed

		if (RandomSubDoc.is_open())
		{
			j = 0;
			while (getline(RandomSubDoc, listSubclass))
			{
				arraySubclassList[j] = listSubclass;
				j += 1;
			}
			RandomSubDoc.close();
		}

		int RandIndexSub = rand() % arrayNumConst; //generates a random number for array index
		newSubclass = arraySubclassList[RandIndexSub];
	}

	return newSubclass;
}

//Generates ability scores (15, 14, 13, 12, 10, 8)
void CharacterSheet::RandomAbilityScores()
{
	//Initialize all abilities to 0 to clear memory for each new character
	SetStrength(0);
	SetDexterity(0);
	SetConstitution(0);
	SetIntelligence(0);
	SetWisdom(0);
	SetCharisma(0);

	//Only using 13, 12, 10, and 8 for randomizing since 15 and 14 are already set based on the PHB
	vector<int> abilityScores {13, 12, 10, 8};
	random_shuffle(abilityScores.begin(), abilityScores.end());
	
	//Strength
	SetStrength(abilityScores[0]);
	
	if (charClass == "Barbarian" || charClass == "Fighter" || charClass == "Paladin")
	{
		SetStrength(15);
	}
	if (charClass == "Cleric")
	{
		SetStrength(14);
	}

	//Dexterity
	if (strength == abilityScores[0])
	{
		SetDexterity(abilityScores[1]);
	}
	else
	{
		SetDexterity(abilityScores[0]);
	}
	
	if (charClass == "Monk" || charClass == "Ranger" || charClass == "Rogue")
	{
		SetDexterity(15);
	}
	if (charClass == "Bard")
	{
		SetDexterity(14);
	}

	//Constitution
	if (strength == abilityScores[0])
	{
		SetConstitution(abilityScores[1]);
	}
	if (dexterity == abilityScores[0])
	{
		SetConstitution(abilityScores[1]);
	}
	if (dexterity == abilityScores[1])
	{
		SetConstitution(abilityScores[2]);
	}
	
	if (charClass == "Barbarian" || charClass == "Druid" || charClass == "Fighter" || charClass == "Sorcerer" || charClass == "Warlock" || charClass == "Wizard")
	{
		SetConstitution(14);
	}

	//Intelligence
	SetIntelligence(abilityScores[1]);

	if (dexterity == abilityScores[1] || constitution == abilityScores[1])
	{
		SetIntelligence(abilityScores[2]);
	}
	if (constitution == abilityScores[2])
	{
		SetIntelligence(abilityScores[3]);
	}
	
	if (charClass == "Wizard")
	{
		SetIntelligence(15);
	}
	if (charClass == "Rogue")
	{
		SetIntelligence(14);
	}

	//Wisdom
	if (constitution != abilityScores[2] && intelligence != abilityScores[2])
	{
		SetWisdom(abilityScores[2]);
	}
	if (intelligence == abilityScores[1])
	{
		SetWisdom(abilityScores[2]);
	}
	if (intelligence == abilityScores[2])
	{
		SetWisdom(abilityScores[3]);
	}
	
	if (charClass == "Cleric" || charClass == "Druid")
	{
		SetWisdom(15);
	}
	if (charClass == "Monk" || charClass == "Ranger")
	{
		SetWisdom(14);
	}

	//Charisma
	SetCharisma(abilityScores[3]);
	
	if (charClass == "Bard" || charClass == "Sorcerer" || charClass == "Warlock")
	{
		SetCharisma(15);
	}
	if (charClass == "Paladin")
	{
		SetCharisma(14);
	}

}

//Modifies the appropiate ability scores based on racial bonuses from the PHB
void CharacterSheet::RacialBonuses()
{
	//PHB races
	if (race == "Dwarf")
	{
		constitution += 2;
	}

	if (race == "Elf" || race == "Halfing")
	{
		dexterity += 2;
	}

	if (race == "Human")
	{
		strength += 1;
		dexterity += 1;
		constitution += 1;
		intelligence += 1;
		wisdom += 1;
		charisma += 1;
	}

	if (race == "Dragonborn")
	{
		strength += 2;
		charisma += 1;
	}

	if (race == "Gnome")
	{
		intelligence += 2;
	}

	if (race == "Half - Elf")
	{
		charisma += 2;

		//Two other ability scores each get +1
		//This randomizes the two extra abilities for the bonus
		vector<string> abilityMods{ "strength", "dexterity", "constitution", "intelligence", "wisdom" };
		random_shuffle(abilityMods.begin(), abilityMods.end());

		if (abilityMods[0] == "strength" || abilityMods[1] == "strength")
		{
			strength += 1;
		}
		if (abilityMods[0] == "dexterity" || abilityMods[1] == "dexterity")
		{
			dexterity += 1;
		}
		if (abilityMods[0] == "constitution" || abilityMods[1] == "constitution")
		{
			constitution += 1;
		}
		if (abilityMods[0] == "intelligence" || abilityMods[1] == "intelligence")
		{
			intelligence += 1;
		}
		if (abilityMods[0] == "wisdom" || abilityMods[1] == "wisdom")
		{
			wisdom += 1;
		}
	}

	if (race == "Half - Orc")
	{
		strength += 2;
		constitution += 1;
	}

	if (race == "Tiefling")
	{
		charisma += 2;
		intelligence += 1;
	}

	//VOLO races
	if (race == "Aasimar")
	{
		charisma += 2;
	}

	if (race == "Firbolg")
	{
		wisdom += 2;
		strength += 1;
	}

	if (race == "Goliath")
	{
		strength += 2;
		constitution += 1;
	}

	if (race == "Kenku")
	{
		dexterity += 2;
		wisdom += 1;
	}

	if (race == "Lizardfolk")
	{
		constitution += 2;
		wisdom += 1;
	}

	if (race == "Tabaxi")
	{
		dexterity += 2;
		charisma += 1;
	}

	if (race == "Triton")
	{
		strength += 1;
		constitution += 1;
		charisma += 1;
	}

	if (race == "Bugbear")
	{
		strength += 2;
		dexterity += 1;
	}

	if (race == "Goblin")
	{
		dexterity += 2;
		constitution += 1;
	}

	if (race == "Hobgoblin")
	{
		constitution += 2;
		intelligence += 1;
	}

	if (race == "Kobold")
	{
		dexterity += 2;
		strength -= 1;
	}

	if (race == "Orc")
	{
		strength += 2;
		constitution += 1;
		intelligence -= 2;
	}

	if (race == "Yuan - Ti")
	{
		charisma += 2;
		intelligence += 1;
	}

	//Other races
	if (race == "Genasi")
	{
		constitution += 2;
	}

	if (race == "Tortle")
	{
		constitution += 1;
		wisdom += 1;
	}
}

//Calculates ability score bonuses based on subrace
void CharacterSheet::CalcSubraceBonus()
{
	//Set the subrace to "None" to clear memory for each new character
	subrace = "None";

	//Aasimar
	if (race == "Aasimar")
	{
		vector<string> subraceAasimar{ "Fallen", "Protector", "Scourge" };
		random_shuffle(subraceAasimar.begin(), subraceAasimar.end());

		subrace = subraceAasimar[0];

		if (subrace == "Fallen")
		{
			strength += 1;
		}
		if (subrace == "Protector")
		{
			wisdom += 1;
		}
		if (subrace == "Scourge")
		{
			constitution += 1;
		}
	}

	//Dragonborn 
	if (race == "Dragonborn")
	{
		vector<string> subraceDragonborn{ "Black", "Blue", "Brass", "Bronze", "Copper", "Gold", "Green", "Red", "Silver", "White" };
		random_shuffle(subraceDragonborn.begin(), subraceDragonborn.end());

		subrace = subraceDragonborn[0];
	}

	//Dwarf 
	if (race == "Dwarf")
	{
		vector<string> subraceDwarf{ "Duergar", "Gold", "Hill", "Mountain", "Shield" };
		random_shuffle(subraceDwarf.begin(), subraceDwarf.end());

		subrace = subraceDwarf[0];

		if (subrace == "Duergar")
		{
			strength += 1;
		}
		if (subrace == "Gold")
		{
			dexterity -= 2;
		}
		if (subrace == "Hill")
		{
			wisdom += 1;
		}
		if (subrace == "Mountain")
		{
			strength += 2;
		}
		if (subrace == "Shield")
		{
			charisma -= 2;
		}
	}

	//Elf 
	if (race == "Elf")
	{
		vector<string> subraceElf{ "Drow", "Eladrin", "High", "Moon", "Shadar - kai", "Sun", "Wood" };
		random_shuffle(subraceElf.begin(), subraceElf.end());

		subrace = subraceElf[0];

		if (subrace == "Drow")
		{
			charisma += 1;
		}
		if (subrace == "Eladrin")
		{
			vector<string> abilityModEladrin{ "Intelligence", "Charisma" };
			random_shuffle(abilityModEladrin.begin(), abilityModEladrin.end());
			
			if (abilityModEladrin[0] == "Intelligence")
			{
				intelligence += 1;
			}
			if (abilityModEladrin[0] == "Charisma")
			{
				charisma += 1;
			}
		}
		if (subrace == "High")
		{
			intelligence += 1;
		}
		if (subrace == "Moon")
		{
			charisma += 1;
		}
		if (subrace == "Shadar - kai")
		{
			charisma += 1;
		}
		if (subrace == "Sun")
		{
			constitution += 1;
		}
		if (subrace == "Wood")
		{
			wisdom += 1;
		}
	}

	//Genasi 
	if (race == "Genasi")
	{
		vector<string> subraceGenasi{ "Air", "Earth", "Fire", "Water" };
		random_shuffle(subraceGenasi.begin(), subraceGenasi.end());

		subrace = subraceGenasi[0];

		if (subrace == "Air")
		{
			dexterity += 1;
		}
		if (subrace == "Earth")
		{
			strength += 1;
		}
		if (subrace == "Fire")
		{
			intelligence += 1;
		}
		if (subrace == "Water")
		{
			wisdom += 1;
		}
	}

	//Gnome 
	if (race == "Gnome")
	{
		vector<string> subraceGnome{ "Deep", "Forest", "Rock" };
		random_shuffle(subraceGnome.begin(), subraceGnome.end());

		subrace = subraceGnome[0];

		if (subrace == "Deep")
		{
			dexterity += 1;
		}
		if (subrace == "Forest")
		{
			dexterity += 1;
		}
		if (subrace == "Rock")
		{
			constitution += 1;
		}
	}

	//Halfling 
	if (race == "Halfling")
	{
		vector<string> subraceHalfling{ "Ghostwise", "Lightfoot", "Stout", "Strongheart" };
		random_shuffle(subraceHalfling.begin(), subraceHalfling.end());

		subrace = subraceHalfling[0];

		if (subrace == "Ghostwise")
		{
			wisdom += 1;
		}
		if (subrace == "Lightfoot")
		{
			charisma += 1;
		}
		if (subrace == "Stout")
		{
			constitution += 1;
		}
		if (subrace == "Strongheart")
		{
			constitution += 1;
		}
	}

	//Half-elf 
	if (race == "Half - Elf")
	{
		vector<string> subraceHalfElf{ "Half - Aquatic", "Half - Drow", "Half - Moon(High)", "Half - Sun(High)", "Half - Wood" };
		random_shuffle(subraceHalfElf.begin(), subraceHalfElf.end());

		subrace = subraceHalfElf[0];

		if (subrace == "Half - Aquatic")
		{
			charisma += 1;
		}
		if (subrace == "Half - Drow")
		{
			charisma += 1;
		}
		if (subrace == "Half - Moon(High)")
		{
			charisma += 1;
		}
		if (subrace == "Half - Sun(High)")
		{
			constitution += 1;
		}
		if (subrace == "Half - Wood")
		{
			wisdom += 1;
		}
	}

	//Human 
	if (race == "Human")
	{
		vector<string> subraceHuman{ "None", "Variant" };
		random_shuffle(subraceHuman.begin(), subraceHuman.end());

		subrace = subraceHuman[0];

		if (subrace == "Variant")
		{
			vector<string> variantStats{ "Strength", "Dexterity", "Constitution", "Intelligence", "Wisdom", "Charisma" };
			random_shuffle(variantStats.begin(), variantStats.end());

			if (variantStats[2] == "Strength" || variantStats[3] == "Strength" || variantStats[4] == "Strength" || variantStats[5] == "Strength")
			{
				strength -= 1;
			}
			if (variantStats[2] == "Dexterity" || variantStats[3] == "Dexterity" || variantStats[4] == "Dexterity" || variantStats[5] == "Dexterity")
			{
				dexterity -= 1;
			}
			if (variantStats[2] == "Constitution" || variantStats[3] == "Constitution" || variantStats[4] == "Constitution" || variantStats[5] == "Constitution")
			{
				constitution -= 1;
			}
			if (variantStats[2] == "Intelligence" || variantStats[3] == "Intelligence" || variantStats[4] == "Intelligence" || variantStats[5] == "Intelligence")
			{
				intelligence -= 1;
			}
			if (variantStats[2] == "Wisdom" || variantStats[3] == "Wisdom" || variantStats[4] == "Wisdom" || variantStats[5] == "Wisdom")
			{
				wisdom -= 1;
			}
			if (variantStats[2] == "Charisma" || variantStats[3] == "Charisma" || variantStats[4] == "Charisma" || variantStats[5] == "Charisma")
			{
				charisma -= 1;
			}			
		}
	}

	//Tiefling
	if (race == "Tiefling")
	{
		vector<string> subraceTiefling{ "Baalzebul", "Dispater", "Feral", "Fierna", "Glasya", "Levistus", "Mammon", 
			"Mephistopheles", "Zariel" };
		random_shuffle(subraceTiefling.begin(), subraceTiefling.end());

		subrace = subraceTiefling[0];

		if (subrace == "Baalzebul")
		{
			charisma += 2;
			intelligence += 1;
		}
		if (subrace == "Dispater")
		{
			charisma += 2;
			dexterity += 1;
		}
		if (subrace == "Feral")
		{
			intelligence += 1;
			dexterity += 2;
		}
		if (subrace == "Fierna")
		{
			charisma += 2;
			wisdom += 1;
		}
		if (subrace == "Glasya")
		{
			charisma += 2;
			dexterity += 1;
		}
		if (subrace == "Levistus")
		{
			charisma += 2;
			constitution += 1;
		}
		if (subrace == "Mammon")
		{
			charisma += 2;
			intelligence += 1;
		}
		if (subrace == "Mephistopheles")
		{
			charisma += 2;
			intelligence += 1;
		}
		if (subrace == "Zariel")
		{
			charisma += 2;
			strength += 1;
		}
	}

	//Yuan - Ti
	if (race == "Yuan - Ti")
	{
		subrace = "Pureblood";
	}
}

//Calculate proficency bonus based on character level
void CharacterSheet::CalcProficencyBonus()
{
	if (level >= 1 && level <= 4)
	{
		SetProficencyBonus(2);
	}
	if (level >= 5 && level <= 8)
	{
		SetProficencyBonus(3);
	}
	if (level >= 9 && level <= 12)
	{
		SetProficencyBonus(4);
	}
	if (level >= 13 && level <= 16)
	{
		SetProficencyBonus(5);
	}
	if (level >= 17 && level <= 20)
	{
		SetProficencyBonus(6);
	}
}

//Calculate ability score modifiers
void CharacterSheet::CalcAbilityScoreMods()
{
	strMod = (strength - 10) / 2;
	dexMod = (dexterity - 10) / 2;
	conMod = (constitution - 10) / 2;
	intMod = (intelligence - 10) / 2;
	wisMod = (wisdom - 10) / 2;
	charMod = (charisma - 10) / 2;
}

//Calculate initiative based on the dexterity modifier
void CharacterSheet::CalcInitiative()
{
	initiative = dexMod;
}

//Set armor type based on starting armor from the PHB
//Randomize the armor types for classes with more than one option
void CharacterSheet::CalcArmorType()
{
	//Setting the starting armor from the PHB for Barbarian, Mone, Sorcerer, Wizard, Bard, Druid, Rogue, Warlock, and Paladin
	if (charClass == "Barbarian" || charClass == "Monk" || charClass == "Sorcerer" || charClass == "Wizard")
	{
		armorType = "None";
	}
	if (charClass == "Bard" || charClass == "Druid" || charClass == "Rogue" || charClass == "Warlock")
	{
		armorType = "Leather";
	}
	if (charClass == "Paladin")
	{
		armorType = "Chain mail";
	}
	
	//Randomizing the starting armor options for Cleric, Ranger, and Fighter
	vector<string> armorClericRanger{ "Leather", "Scale mail"};
	random_shuffle(armorClericRanger.begin(), armorClericRanger.end());

	if (charClass == "Cleric" || charClass == "Ranger")
	{
		armorType = armorClericRanger[0];
	}

	if (charSubClass == "Forge Domain" || charSubClass == "Life Domain" || charSubClass == "Nature Domain" ||
		charSubClass == "Tempest Domain" || charSubClass == "War Domain")
	{
		armorType = "Chain mail";
	}

	vector<string> armorFighter{ "Leather", "Chain mail" };
	random_shuffle(armorFighter.begin(), armorFighter.end());

	if (charClass == "Fighter")
	{
		armorType = armorFighter[0];
	}
}

//Calculate armor class based on equipped armor type
void CharacterSheet::CalcArmorClass()
{
	//Set armor class to 0 to clear memory for each new character
	armorClass = 0;
	
	//Barbarian
	if (charClass == "Barbarian")
	{
		armorClass = (10 + dexMod + conMod);
	}

	//Bard
	if (charClass == "Bard")
	{
		armorClass = (11 + dexMod);
	}

	//Cleric
	if (charClass == "Cleric")
	{
		if (armorType == "Leather")
		{
			armorClass = (11 + dexMod);
		}
		if (armorType == "Scale mail")
		{
			if (dexMod <= 2)
			{
				armorClass = (14 + dexMod);
			}
			if (dexMod > 2)
			{
				armorClass = (14 + 2);
			}
		}
		//Subclasses for chain mail
		//Forge, Life, Nature, Tempest, War
		if (charSubClass == "Forge Domain" || charSubClass == "Life Domain" || charSubClass == "Nature Domain" ||
			charSubClass == "Tempest Domain" || charSubClass == "War Domain")
		{
			armorClass = 16;
		}
	}

	//Druid
	if (charClass == "Druid")
	{
		armorClass = (11 + dexMod);
	}

	//Fighter
	if (charClass == "Fighter")
	{
		if (armorType == "Leather")
		{
			armorClass = (11 + dexMod);
		}
		if (armorType == "Chain mail")
		{
			armorClass = 16;
		}
	}

	//Monk
	if (charClass == "Monk")
	{
		armorClass = (10 + dexMod + wisMod);
	}

	//Paladin
	if (charClass == "Paladin")
	{
		armorClass = 16;
	}

	//Ranger
	if (charClass == "Ranger")
	{
		if (armorType == "Leather")
		{
			armorClass = (11 + dexMod);
		}
		if (armorType == "Scale mail")
		{
			if (dexMod <= 2)
			{
				armorClass = (14 + dexMod);
			}
			if (dexMod > 2)
			{
				armorClass = (14 + 2);
			}
		}
	}

	//Rogue
	if (charClass == "Rogue")
	{
		armorClass = (11 + dexMod);
	}

	//Sorcerer
	if (charClass == "Sorcerer")
	{
		armorClass = (10 + dexMod);
	}

	//Warlock
	if (charClass == "Warlock")
	{
		armorClass = (11 + dexMod);
	}

	//Wizard
	if (charClass == "Wizard")
	{
		armorClass = (10 + dexMod);
	}
}

//Set speed based on character's race
void CharacterSheet::CalcSpeed()
{
	
	//Elf, Human, Dragonborn, Half-Elf, Half-Orc, Tiefling, Aasimar, Firbolg, Goliath = 30
	//Kenku, Lizardfolk, Tabaxi, Triton, Bugbear, Goblin, Hobgoblin, Kobold, Orc, Yuan-Ti, Genasi = 30
	SetSpeed(30);

	//Dwarf, Halfling, Gnome, Tortle = 25
	if (race == "Dwarf" || race == "Hafling" || race == "Gnome" || race == "Tortle")
	{
		SetSpeed(25);
	}
}

// ****************************************

//Print character details to the screen
void CharacterSheet::PrintDetails()
{	
	cout << "\n\n************************************************************" << endl;
	cout << "Name: " << GetName() << "\t\tLevel: " << GetLevel();
	cout << "\nRace: " << GetRace() << "\t\t\tSubrace: " << GetSubrace();
	cout << "\nClass: " << GetCharClass() << "\t\t\tSubclass: " << GetCharSubClass(); 
	cout << "\nBackground: " << GetBackground() << "\t\tAlignment: " << GetAlignment();
	cout << "\n------------------------------------------------------------" << endl;
	cout << "Armor Type: " << GetArmorType() << "\t\tArmor Class: " << GetArmorClass();
	cout << "\nInitiative: " << GetInitiative() << "\t\t\tSpeed: " << GetSpeed();
	cout << "\nProficency Bonus: " << GetProficencyBonus();
	cout << "\n------------------------------------------------------------" << endl;
	cout << "Strength: " << GetStrength() << "\t\tIntelligence: " << GetIntelligence();
	cout << "\nDexterity: " << GetDexterity() << "\t\tWisdom: " << GetWisdom();
	cout << "\nConstitution: " << GetConstitution() << "\tCharisma: " << GetCharisma(); 
	cout << "\n************************************************************" << endl;
	
}

//Print limited character details to the screen
void CharacterSheet::PrintLimitedDetails()
{
	cout << "\n\nName: " << GetName();
	cout << "\nRace: " << GetRace();
	cout << "\nSubrace: " << GetSubrace();
	cout << "\nClass: " << GetCharClass();
	cout << "\nSubclass: " << GetCharSubClass();
	cout << "\nLevel: " << GetLevel();
	cout << "\nBackground: " << GetBackground();
	cout << "\nAlignment: " << GetAlignment();
	cout << "\n********************************" << endl;
	cout << "Strength: " << GetStrength();
	cout << "\nDexterity: " << GetDexterity();
	cout << "\nConstitution: " << GetConstitution();
	cout << "\nIntelligence: " << GetIntelligence();
	cout << "\nWisdom: " << GetWisdom();
	cout << "\nCharisma: " << GetCharisma();
	cout << "\nProficency Bonus: " << GetProficencyBonus();
	cout << "\nArmor Class: " << GetArmorClass();
	cout << "\nInitiative: " << GetInitiative();	
	cout << "\nSpeed: " << GetSpeed();
	cout << "\nArmor Type: " << GetArmorType();
	
}