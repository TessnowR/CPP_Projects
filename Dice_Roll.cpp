//Robert Tessnow-Ramirez
//January 20, 2016 ©
//Class Meeting Wed 6:00PM-8:40PM
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	int DieRoll, Guess, cnt1, cnt2; // defines 4 int variables
	srand((unsigned int)time(NULL)); // gives the random number generator a random starting point

	cout << "Enter a whole number between 1 and 6: "; // prompts user to enter a whole number between 1 and 6
		cin >> Guess; // accepts users input, assigns to variable Guess

		DieRoll = rand() % 6 + 1; // simulates a rolling die
		cout << "Your Guess is: " << Guess << " and the die roll is: " << DieRoll << endl;

		if (Guess == DieRoll) 
			cout << "WINNER" << endl;// displays user is a winner if Guess is equal to DieRoll
		if (DieRoll % 2 == 1)
			cout << "DOUBLE WINNER" << endl;// displays double winner if DieRoll  is an odd number

		if ((DieRoll + Guess >= 10) && (DieRoll % 2 == 0))
			cout << "YOU ARE A LUCKY PERSON" << endl;// displays you are a lucky person if DieRoll plus Guess is greater or equal to 10 and DieRoll is even


	system("pause");
	return 0;
}