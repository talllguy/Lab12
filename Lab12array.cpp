/************************************************************
COSC 501
Elliott Plack
19 NOV 2013                                   Due 25 NOV 2013
Problem: Create a 1-dimensional array with n elements; get
	the size of the array as user input (validate!), max size
	should be 10 (declared as class constant). Perform a
	variety of functions with the array.
Algorithm: Get array size from user, validate, get values,
	perform functions.
************************************************************/
#include <iostream>
using namespace std;

int main ()
{
	int arraySize = 0;
	
	cout << "This program does a number of calculations on an array.\n"
	     << "Enter the size of the array up to 10.";
	while (cin >> arraySize <= 0 || arraySize > 10)
	{
		cin.clear();     // Clear the error flags 
                cin.ignore(100, '\n');    // Remove unwanted characters from buffer 
                cout << "\aEnter a positive integer, greater than 10: ";   // Re-issue the prompt 
	}
