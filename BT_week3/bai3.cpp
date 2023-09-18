#include<iostream>
using namespace std;
struct Node
{
	int value;
	Node* next;
	Node* prev;
};
int count_triplets(Node* head)
{
	Node* cur = head->next->next;
	int count = 0;
	while (cur->next != NULL)
	{
		if (cur->prev->value + cur->value + cur->next->value == 0)
		{
			count++;
		}
		cur = cur->next;
	}
	return count;
}
int main()
{
	int n; cin >> n;
	Node* head = new Node;
	Node* tail = head;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		Node* new_node = new Node();
		new_node->value = num;

		tail->next = new_node;
		new_node->prev = tail;
		tail = new_node;
	}
	cout << count_triplets(head);
}