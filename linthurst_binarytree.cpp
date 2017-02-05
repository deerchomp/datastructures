/*
Create a binary tree class.
-Data array field (private)
-Count field
Add method(data)
-The add method takes a data point, add it to the count position in the array then increases the count.
Print method(void)
-Prints all the fields in the tree.
*/

/*
Brendon Linthurst 659223
CS41
*/

#include <iostream>
using namespace std;

class tree
{
private:
	int data[10];
	int count;

public:
	int add(int);
	void print();
	tree();
};

tree::tree()
{
	for(int i = 0; i < 10; i++)
		data[i] = 0;
	count = 0;
}

int tree::add(int n)
{
	data[count] = n;
	count++;
	return data[count];
}

void tree::print()
{
	cout << "The current tree: " << endl;
	for(int i = 0; i < count; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

int main()
{
	tree *t = new tree;
	for(int i = 0; i < 10; i++)
	{
		t->add(i);
	}
	t->print();

	system("PAUSE");
	return 0;
}
