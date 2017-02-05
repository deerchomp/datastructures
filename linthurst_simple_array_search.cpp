//Search an un-ordered array an integers for a value,
//if the value is found return the index of its position 
//in the array, if not found, return -1.
//Brendon Linthurst 659223

#include<iostream>
using namespace std;

void linearSearch(a)
{
	int userNumber = 0;
	cout << "Enter a number to search for: ";
	cin >> userNumber;
	int i = 0;
	while((i < sizeof(a) / sizeof(int) && a[i] != userNumber) i++)
	{
		if(userNumber == a[i])
			cout << userNumber << " was found in position: " << i;
		else
		{
			cout << userNumber << " was not found in the array!";
			return -1;
		}
			
int main()
{
	int unsortedArray[] = {9,3,1,5,8,4,7,0,10,2};
	linearSearch(unsortedArray);
	return 0;	
}
