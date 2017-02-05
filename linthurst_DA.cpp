/*Dynamic Array
Brendon Linthurst 659223
CS41
*/

#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int add = 0;
	int size = 0;
	int *p;

	cout << "Enter number of elements: ";
	cin >> size;
	p = new int[size];
	while(add != -1)
	{
		if(count < size)
		{
			cout << "Enter number: ";
			cin >> add;
			if(add == -1)
				break;
			else
				p[count] = add;
			count++;
		}
		else
			break;
	}

	for(int i = 0; i < count; i++)
		cout << p[i] << ' ';
	delete[] p;
	cout << endl;
	system("PAUSE");
	return 0;
}