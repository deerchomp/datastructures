/*
Objective:  Create a singly linked list of numbers based upon user input.
Program logic:
Ask for a number, add that number to the front of the list, print the list.
Repeat until they enter -1 for the number.
.
Sample Input: 10, 15, 5, 2, 4, -1
Output: 4, 2, 5, 15, 10
*/

/*
Brendon Linthurst 659223
CS41
*/
#include <iostream>
using namespace std;

class node
{
public:
	int info;
	node *next;
	node(int data, node *ptr = 0)
	{
		info = data;
		next = ptr;
	}
};

class list
{
public:
	list();
	void addToHead(int);
	void print();

private:
	node *head;
	node *tail;
};

list::list()
{
	head = tail = 0;
}

void list::print()
{
	for(node *tmp = head; tmp != 0; tmp = tmp->next)
		cout << tmp->info << " ";
	cout << endl;
}

void list::addToHead(int data)
{
	head = new node(data,head);
	if(tail == 0)
		tail = head;
}

int main()
{
	list *LL = new list;
	cout << "Welcome, the list is currently empty.\nPlease enter a number to add to the front: ";
	int choice = 0;
	cin >> choice;
	while(choice != -1)
	{
		cout << "Adding " << choice << " to the front of the list. " << endl;
		cout << "\nEnter another number to add to the front or -1 to exit: " << endl;
		LL->addToHead(choice);
		cout << "\nThe current list: ";
		LL->print();
		cin >> choice;
	}
	return 0;
}