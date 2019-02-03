//Robert Tessnow-Ramirez
//February 10, 2016
//Lowest Score Drop
#include <iostream>

using namespace std;
void getScore(double &);
void calcAverage(double, double, double, double, double);
int findLowest(double, double, double, double, double);
int main()// main function
{
	double testScore1, testScore2, testScore3, testScore4, testScore5;// initialize testScore variables
	getScore(testScore1);//calls function getScore once fore each of the 5 test scores
	getScore(testScore2);
	getScore(testScore3);
	getScore(testScore4);
	getScore(testScore5);
	calcAverage(testScore1, testScore2, testScore3, testScore4, testScore5);// calls the calcAverage function and passes the 5 test scores

system("pause");
return 0;
}
	//• void getScore() should ask the user for a test score, store it in a reference parameter
	//variable, and validate it.This function should be called by main once for each
	//of the five scores to be entered.
void getScore(double &userScore) {
	cout << "Enter test score between zero (0) and one hundred (100): ";
	cin >> userScore;
	if (userScore < 0 || userScore > 100)
		cout << "Not Acceptable " , getScore(userScore);
}
/*• int findLowest() should find and return the lowest of the five scores passed to it.
It should be called by calcAverage, which uses the function to determine which of
the five scores to drop.
Input Validation : Do not accept test scores lower than 0 or higher than 100.*/
int findLowest(double testScore1, double testScore2, double testScore3, double testScore4, double testScore5) {
	if (testScore1 <= testScore2 && testScore1 <= testScore3 && testScore1 <= testScore4 && testScore1 <= testScore5)
		return 1;
	else if (testScore2 <= testScore1 && testScore2 <= testScore3 && testScore2 <= testScore4 && testScore2 <= testScore5)
		return 2;
	else if (testScore3 <= testScore1 && testScore3 <= testScore2 && testScore3 <= testScore4 && testScore3 <= testScore5)
		return 3;
	else if (testScore4 <= testScore1 && testScore4 <= testScore3 && testScore4 <= testScore2 && testScore4 <= testScore5)
		return 4;
	else if (testScore5 <= testScore1 && testScore5 <= testScore3 && testScore5 <= testScore4 && testScore5 <= testScore2)
		return 5;
}
//• void calcAverage() should calculate and display the average of the four highest
//scores.This function should be called just once by main and should be passed the
//five scores.
void calcAverage(double testScore1, double testScore2, double testScore3, double testScore4, double testScore5) {
	double average;
	int lowestScore = findLowest(testScore1, testScore2, testScore3, testScore4, testScore5);
	if (lowestScore == 1)
	{
		average = (testScore2 + testScore3 + testScore4 + testScore5) / 4;
		cout << "The average of the four highest scores is " << average << endl;
	}
	else if (lowestScore == 2)
	{
		average = (testScore1 + testScore3 + testScore4 + testScore5) / 4;
		cout << "The average of the four highest scores is " << average << endl;
	}
	else if (lowestScore == 3)
	{
		average = (testScore1 + testScore2 + testScore4 + testScore5) / 4;
		cout << "The average of the four highest scores is " << average << endl;
	}
	else if (lowestScore == 4)
	{
		average = (testScore1 + testScore3 + testScore2 + testScore5) / 4;
		cout << "The average of the four highest scores is " << average << endl;
	}
	else
	{
		average = (testScore1 + testScore3 + testScore4 + testScore2) / 4;
		cout << "The average of the four highest scores is " << average << endl;
	}
}


