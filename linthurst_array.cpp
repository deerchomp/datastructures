/*
Create an array that can hold 5 integers.
Load the array from the keyboard.
Print the contents of the array.*/

#include<iostream>
#define SIZE 5
using namespace std;

int main()
{
	int myArray[5] = {1, 2, 3, 4, 5};
	for(int i = 0; i < SIZE; i++)
	{
		cout << myArray[i] << endl;
	}
	system("PAUSE");
	return 0;
}