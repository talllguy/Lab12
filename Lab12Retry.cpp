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

// various array handling functions
float average(float numbers[]);
void even(float numbers[]);
void odd(float numbers[]);
float evenSum(float numbers[]);
float oddSum(float numbers[]);

int main()
{
	// redo with arrays
	// copy back in commit c864814b032eff90c493701556f869aff79629d4
	//https://github.com/talllguy/Lab12/blob/c864814b032eff90c493701556f869aff79629d4/Lab12array.cpp

	int arraySize = 0; // size of the array
	const int maxArraySize = 10; // max size of the array
	float averageNum(0), evenSumNum(0), oddSumNum(0); // variables that returns will be stored in
        
	cout << "This program does a number of calculations on an array.\n"
		<< "Enter the size of the array up to 10.\n";
	while (!(cin >> arraySize) || arraySize < 1 || arraySize > maxArraySize) // validate
	{
		cin.clear();     // Clear the error flags 
		cin.ignore(100, '\n');    // Remove unwanted characters from buffer 
		cout << "\aEnter a positive integer, less than 10: ";   // Re-issue the prompt 
	}

	float *numbers;
	numbers = new float[arraySize]; // declare numbers array with 'elements' (n) positions
	
	for (int i = 0; i < arraySize; i++) // loop to fill array
	{
		cout << "Position " << (i + 1) << ": "; // display the iterator + 1 since it begins as 0
		while ((!(cin >> numbers[i]))) //detects errors in input
		{
			cin.clear();     // Clear the error flags
			cin.ignore(100, '\n');    // Remove unwanted characters from buffer
			cout << "\aInput Error. Please enter a number only.\n" // if error, sound the alarm
				<< "Position " << (i + 1) << ": ";
		}
	}

	cout << "\nExcellent. Your inputs are:\n";
	cout << "| "; // first separator for clarity
	for (int i = 0; i < arraySize; i++) // test loop to output variables in positions
	{
		cout << numbers[i] << " | "; // put formatted separator in
	}

	return 0;
}