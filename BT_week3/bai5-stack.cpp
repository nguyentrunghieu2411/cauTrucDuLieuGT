#include<iostream>
using namespace std;
const int maxSize = 100;
class Stack 
{
	int stack[maxSize];
	int top;
public:
	Stack()
	{
		top = 0;
	}
	void push(int x)
	{
		if (top == maxSize)
		{
			cout << "full";
			return;
		}
		stack[top] = x;
		top++;
	}
	void pop()
	{
		if (top == 0)
		{
			cout << "khong co phan tu";
			return;
		}
		top--;
	}
	void print()
	{
		for (int i = 0; i < top; i++)
		{
			cout << stack[i] << " ";
		}
	}
};
int main()
{
	int n; cin >> n;
	Stack myStack;
	string* action = new string[n];
	int* x = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> action[i];
		if (action[i] == "push")
			cin >> x[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (action[i] == "push")
		{
			myStack.push(x[i]);
		}
		else if (action[i] == "pop")
		{
			myStack.pop();
		}
	}
	myStack.print();
}