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
#include <iomanip>
using namespace std;

// various array handling functions
float average(float numbers[], int arraySize);
void even(float numbers[], int arraySize);
void odd(float numbers[], int arraySize);
float evenSum(float numbers[], int arraySize);
float oddSum(float numbers[], int arraySize);

int main()
{
	// intro

	cout << "This program does a variety of calculations on an array.\n";
	
	// do loop around entire program

	char continueQuestion = 'Y'; // check if user wants to run or repeat
	cout << "Do you want to start? (Y/N): ";
	cin >> continueQuestion;
	while (continueQuestion == 'Y' || continueQuestion == 'y')
	{
		// variables

		int arraySize = 0; // size of the array
		const int maxArraySize = 10; // max size of the array
		float averageNum(0); // variables that returns will be stored in


		// array size determination

		cout << "\nEnter the size of the array up to 10.\n";
		while (!(cin >> arraySize) || arraySize < 1 || arraySize > maxArraySize) // validate
		{
			cin.clear();     // Clear the error flags 
			cin.ignore(100, '\n');    // Remove unwanted characters from buffer 
			cout << "\aEnter a positive integer, less than 10: ";   // Re-issue the prompt 
		}
		cout << "\nNow enter the " << arraySize << " values.\n";


		// set up array

		float *numbers;
		numbers = new float[arraySize]; // declare numbers array with 'elements' (n) positions


		// loop to fill array

		for (int i = 0; i < arraySize; i++)
		{
			cout << (i + 1) << ": "; // display the iterator + 1 since it begins as 0
			while ((!(cin >> numbers[i]))) //detects errors in input
			{
				cin.clear();     // Clear the error flags
				cin.ignore(100, '\n');    // Remove unwanted characters from buffer
				cout << "\aInput Error. Please enter a number only.\n"; // if error, sound the alarm
				cout << (i + 1) << ": ";
			}
		}


		// display array

		cout << "\nThe array elements are:\n";
		cout << "   "; // indent separator for clarity
		for (int i = 0; i < arraySize; i++) // test loop to output variables in positions
		{
			cout << numbers[i] << "   "; // space separated
		}

		cout << endl; // break in output


		// output average

		averageNum = average(numbers, arraySize);
		cout << "\nThe average value =    " << averageNum << endl;


		// even subscripts

		even(numbers, arraySize);


		// even sum

		cout << "\nThe sum of the elements with even subscripts = " << evenSum(numbers, arraySize) << endl;


		// odd subscripts

		odd(numbers, arraySize);


		// odd sum

		cout << "\nThe sum of the elements with odd subscripts = " << oddSum(numbers, arraySize) << endl;


		// repeat?

		cout << "\nDo you want to continue? (Y/N):";
		cin >> continueQuestion;
	}

	return 0;
}

float average(float numbers[], int arraySize)
{
	float sum(0), average(0); // define variables
	for (int i = 0; i < arraySize; i++)
	{
		sum += numbers[i];
	}
	average = (sum / arraySize);
	return average;
}

void even(float numbers[], int arraySize) // display even values
{
	int temp = 0;

	// format output
	cout << "\nThe elements with even subscripts are:\n"
		 << "Index   Value\n"
		 << "=============\n";
	
	// even check subs
	for (int i = 0; i < arraySize; i++)
	{
		temp = (int)numbers[i] % 2; // if integer version of value in numbers array is even..
		if (temp == 0)
			cout << setw(5) << (i+1) << setw(8) << numbers[i] << endl; // output the value
	}
}
void odd(float numbers[], int arraySize) // display odd values
{
	int temp = 0;

	// format output
	cout << "\nThe elements with odd subscripts are:\n"
		<< "Index   Value\n"
		<< "=============\n";

	// even check subs
	for (int i = 0; i < arraySize; i++)
	{
		temp = (int)numbers[i] % 2; // if integer version of value in numbers array is odd..
		if (temp != 0)
			cout << setw(5) << (i+1) << setw(8) << numbers[i] << endl; // output the value
	}
}
float evenSum(float numbers[], int arraySize) // return even sums
{
	int temp = 0;
	float sum(0); // define variables
	for (int i = 0; i < arraySize; i++)
	{
		temp = (int)numbers[i] % 2; // find mod array index div by 2
		if (temp == 0)
			sum += numbers[i]; // if mod is zero (even) add to sum)
	}

	return sum;
}
float oddSum(float numbers[], int arraySize) // return odd sums
{
	int temp = 0;
	float sum(0); // define variables
	for (int i = 0; i < arraySize; i++)
	{
		temp = (int)numbers[i] % 2; // find mod array index div by 2
		if (temp != 0)
			sum += numbers[i]; // if mod is not zero (odd) add to sum)
	}

	return sum;
}