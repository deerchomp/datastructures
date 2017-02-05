/*Quicksort
Brendon Linthurst 659223
CS41
*/

#include <iostream>
#define SIZE 10
using namespace std;

void quickSort(int a[], int left, int right)
{
	int L = left;
	int R = right;
	int pivot = a[(left + right)/2];
	while (L <= R)
	{
		while(a[L] < pivot)
			L++;
		while(a[R] > pivot)
			R--;
		if(L <= R)
		{
			int temp = a[L];
			a[L] = a[R];
			a[R] = temp;
			L++;
			R--;
		}
	}

	if(left < R)
		quickSort(a, left, R);
	if(L < right)
		quickSort(a, L, right);
}

int main()
{
	int a[] = {1,3,5,7,9,2,4,6,8,10};
	quickSort(a, 0, (sizeof(a)/sizeof(int))-1);
	for(int i = 0; i < SIZE; i++)
	{
		cout << a[i] << ' ';
	}
	system("PAUSE");
	return 0;
}
