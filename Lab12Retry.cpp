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



int main()
{
	// redo with arrays
	// copy back in commit c864814b032eff90c493701556f869aff79629d4
	//https://github.com/talllguy/Lab12/blob/c864814b032eff90c493701556f869aff79629d4/Lab12array.cpp

	int arraySize = 0;
	const int maxArraySize = 10;
        
	cout << "This program does a number of calculations on an array.\n"
		<< "Enter the size of the array up to 10.";
	while (!cin >> arraySize || arraySize < 1 || arraySize > maxArraySize) // validate
	{
		cin.clear();     // Clear the error flags 
		cin.ignore(100, '\n');    // Remove unwanted characters from buffer 
		cout << "\aEnter a positive integer, less than 10: ";   // Re-issue the prompt 
	}


	//char runQuestion = 'Y';
	//int arraySize = 0;
	//const int maxArraySize = 10;

	//cout << "Do you want to start(Y/N): ";
	//cin >> runQuestion;

	//while (runQuestion == 'Y' || runQuestion == 'y')
	//{
	//	cout << "Enter array size: ";
	//	while (!(cin >> arraySize) || arraySize < 0 || arraySize > maxArraySize) // error check
	//	{
	//		cin.clear();     // Clear the error flags 
	//		cin.ignore(100, '\n');    // Remove unwanted characters from buffer 
	//		cout << "\aInvalid entry. Enter a positive integer, less than 11.";   // Re-issue the prompt 
	//	}
	//	struct node
	//	{
	//		double data;
	//		node *next;
	//	};
	//	node *q = new node;
	//	node *head;
	//	head = q;
	//	q->data = arraySize;    // assume the list contains 10 numbers

	//	for (int i = 0; i < arraySize; i++)
	//	{
	//		node *p = new node;
	//		while (!(cin >> p->data)) // error check
	//		{
	//			cin.clear();     // Clear the error flags 
	//			cin.ignore(100, '\n');    // Remove unwanted characters from buffer 
	//			cout << "\aInvalid entry. Enter a number: ";   // Re-issue the prompt 
	//		}
	//		
	//		q->next = p;
	//		q = p;
	//	}

	//	cout << "Do you want to continue(Y/N): ";
	//	cin >> runQuestion;
	//}

	

	return 0;
}