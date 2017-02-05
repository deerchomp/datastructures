/*Array Based Queue
Brendon Linthurst 659223
CS41
*/
#include <iostream>
using namespace std;

class Queue
{
public:
	Queue();
	void enqueue(int);
	void print();
	int dequeue();
	bool isEmpty();
private:
	int count,front,end;
	const static int SIZE = 10;
	int *q;
};

Queue::Queue()
{
	count = front = end = 0;
	q = new int[SIZE];
}

void Queue::enqueue(int num)
{
	if(count++ == SIZE)
	{
		count--;
		cout << "Queue has hit its max size." << endl;
		cout << "Front: " << front << endl
			<< "End: " << end << endl
			<< "Count: " << count << endl;
	}

	q[end++] = num;
	if(end >= SIZE)
		end = 0;
}

int Queue::dequeue()
{
	if(isEmpty())
		return -1;
	int temp = q[front++];
	count--;
	if(front > SIZE)
		front = 0;
	return temp;
}

bool Queue::isEmpty()
{
	return front == end;
}

void Queue::print()
{
	for(int i = front; i < end; i++)
		cout << q[i] << ",";
	cout << endl;
}

int main()
{
	Queue *q = new Queue();
	for(int i = 0; i < 5; i++)
	{
		q->enqueue(i);
		q->print();
	}
	for(int i = 0; i < 5; i++)
	{
		q->dequeue();
		q->print();
	}
	system("PAUSE");
	return 0;
}