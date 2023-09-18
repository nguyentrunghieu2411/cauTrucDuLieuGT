#include<iostream>
#include<stack>
using namespace std;
class Queue
{
	stack<int> stack1, stack2;
	int front, rear;
public:
	Queue()
	{
		front = 0;
		rear = 0;
	}
	void push(int x)
	{
		stack1.push(x);
		rear++;
	}
	void pop()
	{
		if (stack1.empty())
		{
			cout << "khong co phan tu";
			return;
		}
		while (stack1.size() > 1)
		{
			int pushTostack2 = stack1.top();
			stack2.push(pushTostack2);
			stack1.pop();
		}
		stack1.pop();
		while (stack2.size() > 0)
		{
			stack1.push(stack2.top());
			stack2.pop();
		}
		front++;
	}
	void print()
	{
		while (stack1.size() > 0)
		{
			int pushTostack2 = stack1.top();
			stack2.push(pushTostack2);
			stack1.pop();
		}
		for (int i = front; i < rear; i++)
		{
			cout << stack2.top() << " ";
			stack2.pop();
		}
	}
};
int main()
{
	Queue myQueue;
	myQueue.push(2);
	myQueue.push(5);
	myQueue.push(7);
	myQueue.push(86);
	myQueue.push(5);
	myQueue.pop();
	myQueue.print();
}