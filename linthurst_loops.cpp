/* Create a method that uses a loop to calculate the summation.
.
int sum(int n)
{
 if (n < 1)
 return 0;
return sum */

/*
Brendon Linthurst
659223
*/

#include<iostream>
using namespace std;

int calc(int n)
{
	cout << "Enter numbers to add to: " << n << endl;
	int add;
	cin >> add;
	while(add != 0)
	{
		n+=add;
		cout << n << endl;
		cout << "Enter another number to add to " << n << endl;
		cin >> add;
	}
	return n;
}

int main()
{
	cout << "Enter a number to begin adding: " << endl;
	int num;
	cin >> num;
	calc(num);
	return 0;
}