#include <iostream>
using namespace std;

class node
{
public:
	int info;
	node* next;
	node(int data, node *ptr = 0)
	{
		info = data;
		next = ptr;
	}
};

class queue
{
public:
	queue(){front = end = 0; count = 0;}
	void	enqueue(int);
	int dequeue();
	bool isEmpty(){return front == end;}
	void print();
	
private:
	node *front, *end;
	int count;
};

void queue::enqueue(int data)
{
	count++;
	node* temp = new node(data);
	if(end == 0)
	{
		front = end = temp;
	}
	else
	{
		end->next = temp;
		end = temp;
	}
}

int queue::dequeue()
{
	if(isEmpty())
	{
		cout << "The queue is empty!" << endl;
		return -999;
	}
	count--;
	node* temp;
	int select = front->info;
	temp = front;
	front = front->next;
	delete temp;
	return select;
}

void queue::print()
{
	for(node* temp = front; temp != 0; temp = temp->next)
		cout << temp->info << " ";
	cout << endl;
	cout << "Items in the queue: " << count << endl << endl;
}

int main()
{
	queue *q = new queue;
	cout << "Enqueing 5..." << endl;
	q->enqueue(5);
	q->print();
	cout << "Enqueing 10..." << endl;
	q->enqueue(10);
	q->print();
	cout << "Enqueing 15..." << endl;
	q->enqueue(15);
	q->print();
	
	cout << "Dequeing once..." << endl;
	q->dequeue();
	q->print();
	cout << "Dequeing once..." << endl;
	q->dequeue();
	q->print();

	system("PAUSE");
	return 0;
}


