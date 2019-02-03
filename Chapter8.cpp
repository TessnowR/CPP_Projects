//robert tessnow-ramirez
//February 23, 2015 ©
#include <iostream>
using namespace std;
int searchList(int array[], int numElements, int value);
int main()
{
	int array[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12, 13, 14, 15, 16, 17, 18, 19, 20 };
	
	


	system("pause");
	return 0;
}
int searchList(int array[], int numElements, int value) {
	int index = 0;
	int position = -1;
	bool found = false;
	
	while (index < numElements && !found) {
		
		if (array[index] == value) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}




/*
8. Search Benchmarks
Write a program that has an array of at least 20 integers. It should call a function that
uses the linear search algorithm to locate one of the values. The function should keep
a count of the number of comparisons it makes until it finds the value. The program
then should call a function that uses the binary search algorithm to locate the same
value. It should also keep count of the number of comparisons it makes. Display these
values on the screen.
*/