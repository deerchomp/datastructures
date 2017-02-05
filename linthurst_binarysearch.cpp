#include <iostream>
#include <algorithm>
using namespace std;


int binSearch(int a[], int userValue, int min, int max)
{
	int key = userValue;
	
	if(max >= min)
	{
		int mid = (min + max) / 2;

		if(key == a[mid])
			return mid;
		else if (key < a[mid])
			return binSearch(a, key, min, max - 1);
		else
			return binSearch(a, key, mid + 1, max);
	}
	else
		return -1;
}

int main()
{
	int userValue = 0;
	int min = 0;
	int a[] = {1,3,5,7,9,2,4,6,8,10};
	int max = (sizeof(a)/sizeof(int));

	//The array MUST be sorted.
	sort(begin(a), end(a));

	cout << "Enter a value to search for: ";
	cin >> userValue;

	int result = binSearch(a, userValue, min, max);
	if(result == -1)
		cout << userValue << " was not found in the array." << endl;
	else
		cout << userValue << "was found at element " << result << endl;
	system("PAUSE");
	return 0;
}

