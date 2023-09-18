#include<iostream>
using namespace std;
const int maxSize = 100;
class Queue
{
	int queue[maxSize];
	int front, rear;
public:
	Queue()
	{
		front = 0; rear = 0;
	}
	void enqueue(int x)
	{
		if (rear == maxSize)
		{
			cout << "max";
			return;
		}
		queue[rear] = x;
		rear++;
	}
	void dequeue()
	{
		if (front == rear)
		{
			cout << "ko co phan tu";
			return;
		}
		front++;
	}
	void print()
	{
		for (int i = front; i < rear; i++)
		{
			cout << queue[i] << " ";
		}
	}
};
int main()
{
	int n; cin >> n;
	Queue myQueue;
	string* action = new string[n];
	int* x = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> action[i];
		if (action[i] == "enqueue")
			cin >> x[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (action[i] == "enqueue")
		{
			myQueue.enqueue(x[i]);
		}
		else if (action[i] == "dequeue")
		{
			myQueue.dequeue();
		}
	}
	myQueue.print();
}