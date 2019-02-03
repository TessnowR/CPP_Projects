//robert tessnow-ramirez
//February 18, 2015 ©
#include <iostream>
using namespace std;
int main()
{
	//	1. Create a one Dimensional array, ages that holds 4 int values
	int ages[4] = { 18,25,31,55 };

	//	2. Write a for loop and print, in reverse order the 4 values stored in memory 
	for (int i = 3; i > -1; i--)
	{
		cout << ages[i] << " ";
	}
	cout << endl;
	//	3. print ages array using pointer notation
	for (int i = 3; i > -1; i--)
	{
		cout << *(ages + i) << " ";
	}
	cout << "======================" << endl;
	//initialize a interger array for 10 students
	int studHeight[10];

	cout << "		year" << endl;
	cout << "\t1\t\t";
	cout << "2\t\t";
	cout << "3\t\t";
	cout << "4\t\t";
	cout << "5\t\t" << endl;
	cout << endl;
	int payment[75][3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				cout << "6.5%" <<  payment[i][j][k] << "\t\t";

			}
			cout << endl;
		}

	}
	cout << endl;
	cout << payment[0][1][4] << endl;

	system("pause");
	return 0;
}