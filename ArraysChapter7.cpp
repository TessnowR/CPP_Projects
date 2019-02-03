//robert tessnow-ramirez
//February 18, 2015 ©
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	double dArr[5];
	long lArr[] = { 100000, 134567, 123456, 9, -234567, -1, 123489 };
	int iArr[3][5];
	char sName[31] = "robert tessnow-ramirez";
	short cnt1, cnt2;
	long double total = 0;
	long highest;
	/* 4. a for loop to put a random number into each of the elements of the array of double, 
		dArr.Use rand() and seed a random starting point with srand().Use a for loop to*/

	srand((unsigned int)time(NULL));// gives the random number generator a random starting point
	cout << "dArr is : ";
		for (int dArrAssign = 0; dArrAssign < 5; dArrAssign++)
		{
			dArr[dArrAssign] = rand();
		}
		
		for (int dArrPrint = 0; dArrPrint < 5; dArrPrint++)
		{
			cout << dArr[dArrPrint] << " ";
		}
		// 5. another for loop to add up the array of double, dArr, into the variable total
		for (int addRandNumsOfdArr = 0; addRandNumsOfdArr < 5; addRandNumsOfdArr++)
		{
			total += dArr[addRandNumsOfdArr];
		}
		// 6. one cout to print the total and another cout to print the average of the double array, dArr. 
		cout << "\nThe total is: " << total << endl;
		cout << "The average is: " << total / 5 << endl;
		/* 7. a for loop similar to the following for the long array, lArr:
           for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++)
		       {
				  logic to compare each array element, starting with lArr[1], with highest
				  replace highest if the value in lArr[cnt]  is higher than the value in variable highest
				 }*/

		for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++)
		{
			if (lArr[cnt1] > highest)
			{
				highest = lArr[cnt1];
			}
		}
		// 8. a cout to print highest as derived in the above code    
		cout << "The highest is: " << highest << endl;
		/* 9. a for loop to put a random number, each with a value no lower than 1 and no higher than 53, into each element of iArr, 
		the array of integer, seed the random generator with srand((unsigned)time(NULL)).Only have to run srand once….Use the modulo 
		operator similar to the way you did with dice rolls in Project 2.*/

		cout << "iArr is:\n";
		for (int iArrAssignRow = 0; iArrAssignRow < 3; iArrAssignRow++)
		{
			for (int iArrAssignCol = 0; iArrAssignCol < 5; iArrAssignCol++)
			{
				iArr[iArrAssignRow][iArrAssignCol] = (rand() % 53) + 1;
			}
		}
		// 10. a separate loop to print iArr with 3 rows on your screen.Each row has 5 numbers.Use setw to control the width of each column.See Chapter 3 for an example of a program using setw.Print row by row.
		for (int iArrPrintRow = 0; iArrPrintRow < 3; iArrPrintRow++)
		{
			for (int iArrPrintCol = 0; iArrPrintCol < 5; iArrPrintCol++)
			{
              cout << setw(4) << iArr[iArrPrintRow][iArrPrintCol];
			}
			cout << endl;

		}
		cout << "Array by column is: " << endl;
		/* 11. a loop to print the 2 dimensional array, iArr, 
		so that all 3 numbers in column 0 are printed and then 
			on the next line all 3 numbers in column 1, etc. thru 
			column 4. Print column by column.*/
		int i = 0;
			while (i < 5)
			{
				for (int row = 0; row < 3; row++)
				{
					cout << setw(4) << iArr[row][i];
				}
				i++;
				cout << endl;
			}
			/* 12. Use cin.getline( ...... ) to type another name 
			into the variable sName*/
			cout << "Please enter your name: ";
			cin.getline(sName, 32);
			cout << "sName is now changed to: " << sName << endl;
			/* 13. Print the ascii value of each character in the char 
			array, 1 per line.Use a while loop and look for the '\0' as a signal to end.*/
			cout << "The ascii value of each character in your name is: " << endl;
			int p = 0;
			while ( sName[p] != '\0')
				{
					cout << (int)sName[p] << endl;
					p++;
				}
			/*14. make the array of char, sName, have the name "Albert Einstein" in it.
			You must use strcpy_s function.*/

			strcpy_s(sName, "Albert Einstien");
			cout << "sname is now changed to: " << sName << endl;
			/*15. print the ascii value of the 12th character of the string sName*/
			cout << "The ascii value of the 12th character of sName is: " << (int)sName[12] << endl;
			
	system("pause");
	return 0;
}
