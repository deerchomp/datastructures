/*
Sorted linked list.
Insert a number in sorted order
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
	void print();
	void insert(int);

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

void list::insert(int data)
{
	if(head == NULL)
		head = new node(data,head);
	else if(data < head->info)
		head = new node(data,head);
	else
	{
		node *tmp = head;
		while(tmp->next && tmp->next->info < data)
			tmp = tmp->next;
		tmp->next = new node(data, tmp->next);
	}
}

int main()
{
	list *LL = new list;
	cout << "Welcome, the list is currently empty.\nPlease enter a number to add:";
	int choice = 0;
	cin >> choice;
	while(choice != -1)
	{
		cout << "Adding " << choice << " to the list." << endl;
		cout << "\nEnter another number to add to the list or -1 to exit: " << endl;
		LL->insert(choice);
		cout << "\nThe current list: ";
		LL->print();
		cin >> choice;
	}
	return 0;
}