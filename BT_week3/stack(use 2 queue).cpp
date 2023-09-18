#include<iostream>
#include<queue>
using namespace std;
const int maxSize = 100;
class Stack
{
	queue<int> queue1,queue2;
	int top;
public:
	Stack()
	{
		top = 0;
	}
	void push(int x)
	{
		queue1.push(x);
		top++;
	}
	void pop()
	{
		if (queue1.empty())
		{
			cout << "khong co phan tu";
			return;
		}
		while (queue1.size() > 1)
		{
			int pushToQueue2 = queue1.front();
			queue2.push(pushToQueue2);
			queue1.pop();
		}
		queue1.pop();
		while (queue2.size() > 0)
		{
			queue1.push(queue2.front());
			queue2.pop();
		}
		top--;
	}
	void print()
	{
		for (int i = 0; i < top; i++)
		{
			cout << queue1.front() << " ";
			queue1.pop();
		}
	}
};
int main()
{
	Stack myStack;
	myStack.push(2);
	myStack.push(5);
	myStack.push(7);
	myStack.push(86);
	myStack.push(5);
	myStack.pop();
	myStack.print();
}