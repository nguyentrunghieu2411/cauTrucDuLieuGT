#include<iostream>
using namespace std;
struct Node
{
	Node* next;
	int value;
};
Node* insert(int p, int x, Node* head)
{
	Node* toInsert = new Node;
	toInsert->value = x;
	if (p == 0)
	{
		toInsert->next = head;
		return toInsert;
	}
	Node* header = head;
	while (p > 1)
	{
		p--;
		head = head->next;
	}
	toInsert->next = head->next;
	head->next = toInsert;
	return header;
}
Node* deleteNode(int p, Node* head)
{
	if (p == 0)
	{
		return head->next;
	}
	Node* header = head;
	while (p > 1)
	{
		p--;
		head = head->next;
	}
	Node* toDelete = head->next;
	head->next = toDelete->next;
	delete toDelete;
	return header;
}
int main()
{
	Node* head = NULL;
	int n; cin >> n;
	int* p = new int[n];
	int* x = new int[n];
	string* action = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> action[i] >> p[i];
		x[i] = NULL;
		if (action[i] == "insert")
		{
			cin >> x[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (action[i] == "insert")
		{
			head = insert(p[i], x[i], head);
		}
		else if (action[i] == "delete")
		{
			head = deleteNode(p[i], head);
		}
	}
	while (head != NULL)
	{
		cout << head->value << " ";
		head = head->next;
	}
}