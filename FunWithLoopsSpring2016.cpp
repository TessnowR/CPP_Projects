
//January 27, 2016
//Fun with Loops Spring 2016
#include <iostream>
using namespace std;
int main()
{	
	short choice;
	do
	{

	cout << "1. Play Games" << endl;
	cout << "2. Go home and to bed" <<  endl;
	cout << "3. Play on the Internet" << endl;
	cout << endl;
	cout << "Choose one of the above" << endl;
	cout << "or zero (0) to Quit" << endl;
	cin >> choice;
	system("cls");
	switch (choice)
	{
	case 0:
		cout << "Thank you for playing" << endl;
		break;
	case 1:
		cout << "You chose to play games" << endl;
		break;
	case 2:
		cout << "You chose to go home and go to bed" << endl;
		break;
	case 3:
		cout << "You chose to play on the Internet...Go to the Hard Drive Cafe\n";
		break;
	default:
		cout << "You chose poorly..." << endl;
		break;
	}
	} while (choice != 0);
	/*4.	Using the “standard data processing loop” ask the user to enter a number. 
a.	Display that number multiplied by itself.
b.	 Continue to ask the user for input until he/she enters negative one ( -1).
get the first item of data before entering the loop
tests the item of data, processes if test is true
gets the next item of data*/
	int num;
	cout << "Enter a number, or -1 to Quit and I will give you its square"<<endl;
	cin >> num;
	while (num != -1)
	{
		cout << num * num << " is your number square " << endl;
		cout << "Enter a number, or -1 to Quit and I will give you its square" << endl;
		cin >> num;
	}
	/*5.	Use a For Loop to print only the even numbers between 1 and 10 inclusively.
a.	 Print the numbers all on the same line and after the loop go to a new line. 
b.	Increment the counter by one only.
*/
	for (int counter = 1; counter < 11; counter++)
	{
		if (counter % 2 == 0)//if (!(counter$2))
			cout << counter << " ";
	}
	cout << endl;
	/*6.	Same as the previous problem, but make it a While Loop.
		(Use a While Loop to print only the even numbers between 1 and 10 inclusively.
		a.Print the numbers all on the same line and after the loop go to a new line.
		b.Increment the counter by one only)*/
	num = 1;
	while (num < 11)
	{
		if (num % 2 == 0)
			cout << num << " ";
		num++;
	}
	cout << endl;
	system("pause");
	return 0;
}