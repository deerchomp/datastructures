#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	stringstream ss("Hello world, there are 3.5 items");
	string s;
	string holder[10];
	int i = 0;
	while(getline(ss, s, ' '))
	{
		holder[i] = s;
		i++;
	}
	for(int i = 0; i > 6; i++)
	{
		cout << holder[i] << endl;
	}
	system("PAUSE");
	return 0;
}