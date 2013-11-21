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
	char runQuestion = 'Y';
	int arraySize = 0;

	cout << "Do you want to start(Y/N): ";
	cin >> runQuestion;

	while (runQuestion == 'Y' || runQuestion == 'y')
	{
		cout << "Enter array size: ";
		while (cin >> arraySize || arraySize > 0 || arraySize <= 10) // error check
		{

		}
		struct node
		{
			int data;
			node *next;
		};
		node *q = new node;
		node *head;
		head = q;
		q->data = 10;    // assume the list contains 10 numbers

		for (int i = 0; i < 10; i++)
		{
			node *p = new node;
			cin >> p->data;
			q->next = p;
			q = p;
		}
	}

	

	return 0;
}