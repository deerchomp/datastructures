/*
Create a node class/struct
-Data field
-2 self referential pointers
Create a BST class/struct
-Node field
Methods:
Add (data)
-Adds the data to the tree in sorted order.
printInOrder()
-printInOrders all the nodes using inorder traversal
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
	int data;
	node* left, *right;
	node()
	{
		left = right = NULL;
	}

	node(int data, node *l = 0, node *r = 0)
	{
		this->data = data;
		left = l;
		right = r;
	}


};

class bst
{
public:
	node* root;
	node* insert(node*, node* );
	bst(){ root = 0; }
	bool addNode(int);
	void printInOrder(node*);
};

bool bst::addNode(int data)
{
	node *newNode = new node(data);
	if(root == 0)
	{
		root = newNode;
		return true;
	}
	node* temp = root;
	while(true)
	{
		if(data < temp->data)
			if(temp->left == 0)
			{
				temp->left = newNode;
				break;
			}
			else
				temp = temp->left;
		else if(data > temp->data)
			if(temp->right == 0)
			{
				temp->right = newNode;
				break;
			}
			else
				temp = temp->right;
		else if(data == temp->data)
			return false;
	}
	return true;
}

void bst::printInOrder(node* temp)
{
	if(temp != NULL)
	{
		printInOrder(temp->left);
		cout << temp->data << " ";
		printInOrder(temp->right);
	}
}

int main()
{
	bst *b = new bst;
	int usersNumber;
	cout << "Please enter numbers to the tree to begin." << endl;
	do{
		cout << "Enter a number: ";
		cin >> usersNumber;
		b->addNode(usersNumber);
	}while(cin);

	cout << "In order traversal: " << endl;
	b->printInOrder(b->root);
	cout << endl;
	system("PAUSE");
	return 0;
}
