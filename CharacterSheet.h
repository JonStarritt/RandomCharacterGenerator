//CharacterSheet.h

/*

Character Sheet Header file

*/

//#includes
#include<string>

//STDLib functions
using std::string;

class CharacterSheet
{
public:
	//Character Sheet member function prototypes
	CharacterSheet(); //Constructor, takes no parameters

	string GetName(); //Returns the name
	void SetName(string); //Sets the name

	string GetRace(); //Returns the race
	void SetRace(string); //Sets the race

	string GetCharClass(); //Returns charClass
	void SetCharClass(string); //Sets charClass

	int GetLevel(); //Returns the level
	void SetLevel(int); //Sets the level

	string GetBackground(); //Returns the background
	void SetBackground(string); //Sets the background

	string GetAlignment(); //Returns the alignment
	void SetAlignment(string); //Sets the alignment




	int GetStrength(); //Returns the strength
	void SetStrength(int); //Sets the strength

	int GetDexterity(); //Returns the dexterity
	void SetDexterity(int); //Sets the dexterity

	int GetConstitution(); //Returns the constitution
	void SetConstitution(int); //Sets the constitution

	int GetIntelligence(); //Returns the intelligence
	void SetIntelligence(int); //Sets the intelligence

	int GetWisdom(); //Returns the wisdom
	void SetWisdom(int); //Sets the wisdom

	int GetCharisma(); //Returns the charisma
	void SetCharisma(int); //Sets the charisma




	int GetProficencyBonus(); //Returns the proficencyBonus
	void SetProficencyBonus(int); //Sets the proficencyBonus

	int GetArmorClass(); //Returns the armorClass
	void SetArmorClass(int); //Sets the armorClass

	int GetInitiative(); //Returns the initiative
	void SetInitiative(int); //Sets the initiative

	int GetSpeed(); //Returns the speed
	void SetSpeed(int); //Sets the speed



	void RandomRace(); //Picks a random character race
	void RandomRaceS10(); //Picks a random character race for Season 10
	void RandomNPCRace(); //Picks a random NPC race
	void RandomCharClass(); //Picks a random character class
	void RandomBackground(); //Picks a random character background
	void RandomAlignment(); //Picks a random NPC alignment
	void RandomAlignmentAL(); //Picks a random AL legal character alignment for Seasons 1-9
	void RandomAlignmentALS10(); //Picks a random AL legal character alignment for Season 10

	void PrintDetails(); //Prints all of the character details to the screen
	void PrintLimitedDetails(); //Prints the limited character details to the screen

	string NameByRace(); //Selects a random name from an appropiate list based on character's race
	

private:
	//Character Sheet class data members
	string name;
	string race;
	string charClass;
	int level;
	string background;
	string alignment;

	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;

	int proficencyBonus;
	int armorClass;
	int initiative;
	int speed;
};