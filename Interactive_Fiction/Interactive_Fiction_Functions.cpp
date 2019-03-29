#include <iostream>
#include <string>

using namespace std;
//Declaring function
string GetCharacterName();
//Declaring function
void Welcome(string characterName);
//Declaring function
void StartStory();
//Declaring function
void Decision();


int main()
{
	//Call GetCharacterName function
	string characterName = GetCharacterName();
	//Need to catch the character name coming back from this function
	//Do this with the characterName variable

	//Here we use the characterName and start welcome function in main
	Welcome(characterName);

	//Starting the story in main
	StartStory();

	//Starting the decisions in main
	Decision();

	system("pause");

	return 0;
}
//Function to get the character name
string GetCharacterName()
{
	cout << "Please enter your character name: ";

	//Variable to collect user input for character name
	string CharacterName;

	getline(cin, CharacterName);

	return CharacterName;
}
//Function for welcome screen to the program
void Welcome(string characterName)
{
	cout << "\nWelcome " << characterName << " to Zombieland.\n";
	cout << "Be careful of the undead, or you may become one!" << endl;
}
//Function to start the story for the program
void StartStory()
{
	cout << "You wake up and see your classmates in the room.\n";
	cout << "However, they look different than usual" << endl;
	cout << "Also, they have taken an unusual notice to you and it feels uneasy" << endl;
}
//Function to allow the decisions to be made
void Decision() 
{



}