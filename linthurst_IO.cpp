/*
IO
Brendon Linthurst 659223
CS41
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	float a;
	char s[] = "Hello world there are 3.5 items";
	char *parse;
	parse = strtok(s," ");
	while(parse != NULL)
	{
		if(atof(parse) != 0)
		{
			a = atof(parse);
			cout << a * 2 << endl;
			parse = strtok(NULL, " ");
		}
		else
		{
			cout << parse << endl;
			parse = strtok(NULL, " ");
		}
	}
	system("PAUSE");
	return 0;
}