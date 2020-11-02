 /*Naszir L. Merritt Interactive Fiction
 * Title: untangible emotions
 * 
 * Goals within project:
 * Pass and return parameters to your functions.
 * Control all main functions in the main program. 
 * 
 * 
 * Need fixes 11/2/2020:
 * In fake quit function, i can't change the health or food for player to show in stats.
 * U.I needs to be better formatted for player 
 * Finish story\project
 * current progress: 10%
 * 
 */

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int ToBeContinued(int percentage = 10);

int FakeQuit();

int PlayerHellpResponse(string prompt);

int PlayerStats;


int PlayerHealth = 10;

int PlayerFood = 30;

int achievement = 0;

int PlayerHellpResponses = 0;

string PlayerRules();

string YesNoDecision(string prompt);


string PlayerAnswer;


int main()
{

	int PlayerHealth = 10;

	int PlayerFood = 30;

	int FirstChoice = 1; // player choice

	int SecondChoice = 2; // player choice 

	int Back = 3; // Go back (another player choice)

	int achievement = 0;


	PlayerRules();
	

	cout << "\n\t\t\t\t\tUntangible Emotions. . . .\n\n";
	cout << "\t\t\t\t     This is a story about choices.     \n\n";
	cout << "\t\t\t\t     Your fate is in your hands.     \n\n";
	cout << "\n\t\t\t\t\t'Remember who you are'";
	
	string  PlayerAnswer = YesNoDecision("\nUnkown:Would you like to remember?\n");
	

	if (PlayerAnswer == "y" )
	{
		cout << "\n\nUnkown:So be it.\n\n";

	}
	else if (PlayerAnswer == "n")
	{
		cout << "\n\nProgram Hellp:Please type 'quit' to exit the game.\n\n";
		cout << "Response:";
		cin >> PlayerAnswer;

		if (PlayerAnswer == "quit")
		{
			achievement++;
			FakeQuit();


		}
		else
		{
			PlayerHellpResponse("\n\nProgram Hellp:Oh, so you don't want to 'quit' but you dont't want to remember either.");


		}

	}


	cout << "You wake in the middle of a field.\n" << "\n\nYour current stats are:\n";
	cout << "Health: " << PlayerHealth << "\n";
	cout << "Food: " << PlayerFood << "\n";
	cout << "Achievements: " << achievement << "\n";

	

	ToBeContinued();
	






	
		/*cout << "\n\nCreator:What was that?What did you do? I'm not supposed to be here.Put me back.\n\n";
		cout << "\t\t\t\t\tAcievement Unlocked: Bother the programmer\n\n";
		achievement++;*/

	









	return 0;


}






string PlayerRules()
{
	

	
	
		cout << "\t\t\t\t Rules\n\n";
		cout << "\t\t\t\tDon't use uppercase.\n";
		cout << "\t\t\t\tNo Spaces\n";
		cout << "\t\t\t\tDo you understand?\n"<< "\t\t\t\t(Use y for yes, and n for no)\n";
		cout << "\t\t\t\tResponse:";
		cin >> PlayerAnswer;

	

	if (PlayerAnswer != "y")
	{
		ToBeContinued();
	}

	return PlayerAnswer;


}





string YesNoDecision(string prompt)
{
	do
	{
		
		cout << prompt;
		cout << "\nResponse:";
		cin >> PlayerAnswer;
		

 
	} while (PlayerAnswer != "y" && PlayerAnswer != "n" );

	return PlayerAnswer;

}

int FakeQuit()
{
	cout << "\n\n\t\t\t\t\t Achievement Unlocked: Anger the Hellp\n\n";
	cout << "Program Hellp:You really thought i'd let you leave?\n" << "How much of a fool do you take me for?\n";
	cout << "Because of your lack of bravery I will personally half your supplies or half your health.\n";
	PlayerHealth = 5;

	cout << "\n\nYour health is now: " << PlayerHealth << " and your Food is: " << PlayerFood << ".\n";
	cout << "I hope it was worth it. " << "What am I saying? I really dont't care. Now go and remember!\n";
	YesNoDecision("Do you understand now?\n");
	
	
	cout << "\n\nEither way I'm sending you back.\n\n";
	
	
	return  PlayerHealth;

}

int PlayerHellpResponse(string prompt)
{
 
	cout << prompt;
	PlayerHellpResponses++;
	
	return PlayerHellpResponses;
}

int ToBeContinued(int percentage)
{
	
	



		cout << "\nDev: This project is not yet complete.\n";
		cout << "Current completion percentage is: " << percentage << ".\n";
		cout << "Feel free to try other options available in the program or quit.\n";
		YesNoDecision("Would you like to play again?");
		

	

	if (PlayerAnswer == "n")
	{

		cout << "\n\n\n\n\nThanks for playing.\n\n";
		
		exit(0);
		
		
	}
	
	
		main();
	

	
}