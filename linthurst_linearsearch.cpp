/* Linear search
Brendon Linthurst 659223
CS41
*/

#include<iostream>
#define SIZE 10
using namespace std;

int linSearch(int a[], int userSearchedFor)
{
	for(int i = 0; i < SIZE; i++)
		if(userSearchedFor == a[i])
			return i;
	return -1;
}

int main()
{
	int userSearchedFor = 0;
	int a[] = {10,8,6,4,2,1,3,5,7,9};
	cout << "Enter a number you want to search for: ";
	cin >> userSearchedFor;
	int result = linSearch(a, userSearchedFor);
	if(result >=0)
		cout << "The number " << userSearchedFor << " was found at index " << result << '.' << endl << endl;
	else
		cout << "The number " << userSearchedFor << " was not found!" << endl << endl;
	system("PAUSE");
	return 0;
}