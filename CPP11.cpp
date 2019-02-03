//Robert Tessnow-Ramirez
//January 17, 2016 ©
#include <iostream>

using namespace std;

int main()
{
	/*  Data Type Typical Size Typical Range
	short int			   2 bytes			 32,768 to 32, 767
	unsigned short int	   2 bytes			 0 to + 65, 535
	int					   4 bytes			 2, 147, 483, 648 to 2, 147, 483, 647
	unsigned int		   4 bytes			 0 to 4, 294, 967, 295
	long int			   4 bytes			 2, 147, 483, 648 to 2, 147, 483, 647
	unsigned long int	   4 bytes			 0 to 4, 294, 967, 295
	long long int		   8 bytes			 9, 223, 372, 036, 854, 775, 808 to 9, 223, 372, 036, 854, 775, 807
	unsigned long long int 8 bytes			 0 to 18, 446, 744, 073, 709, 551, 615
	*/
	unsigned int USPopulation;
	float AverageFamilyIncome;
	float HourlyWage;
	unsigned short int SPCStudents;
	double GNPFlorida;
	char Gender;

	cout << "Enter the population of U.S. without commas: ";
	cin >> USPopulation;
	
	cout << "Enter the average family income in the U.S. without commas: ";
	cin >> AverageFamilyIncome;

	cout << "Enter the hourly wage of 1 family member without commas: ";
	cin >> HourlyWage;

	cout << "Enter th total amount of students attending SPC without commas: ";
	cin >> SPCStudents;

	cout << "Enter the total GNP of Florida without commas: ";
	cin >> GNPFlorida;

	cout << "Enter your gender: ";
	cin >> Gender;

	cout << USPopulation << "\n";
	cout << AverageFamilyIncome << "\n";
	cout << HourlyWage << "\n";
	cout << SPCStudents << "\n";
	cout << GNPFlorida << "\n";
	cout << Gender << "\n";
	cout << "\a" << "\a"<< "\a" << "\a" << "\a";

	system("pause");
	return 0;
}