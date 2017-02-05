/*
Array Based Stack
Brendon Linthurst 659223
CS41
*/

#include <iostream>
using namespace std;

class Stack
{
public:
	Stack();
	void push(int);
	int pop();
	void print();
	bool isEmpty();

private:
	int *s;
	int top;
	int maxElem;
};

Stack::Stack()
{
	top = 0;
	maxElem = 10;
	s = new int[maxElem];
}

void Stack::push(int num)
{
	if(top == maxElem)
		return;
	s[top++] = num;
}

int Stack::pop()
{
	if(top == 0)
	{
		cout << "Error: Cannot pop an empty stack." << endl;
		return -1;
	}
	return s[--top];
}

void Stack::print()
{
	if(top == 0)
	{
		cout << "The stack is empty." << endl;
		return;
	}
	for(int i = 0; i < top; i++)
		cout << s[i] << ",";
	cout << endl;
}

bool Stack::isEmpty()
{
	return(top == 0);
}

int main()
{
	Stack *s = new Stack();
	s->push(53);
	s->print();
	s->push(34);
	s->print();
	s->push(98);
	s->print();
	s->pop();
	s->print();
	s->pop();
	s->print();
	s->pop();
	s->print();
	cout << "\nCurrent status of the stack: " << endl;
	if(s->isEmpty())
		cout << "The stack is empty" << endl;
	else
		cout << "The stack is not empty" << endl;
	cout << endl;
	system("PAUSE");
	return 0;
}