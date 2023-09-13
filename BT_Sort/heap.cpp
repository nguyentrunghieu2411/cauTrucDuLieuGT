#include<iostream>
#include<algorithm>
using namespace std;
void heaptify(int a[], int n, int i)
{
	int father = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < n && a[left] > a[father])
	{
		father = left;
	}
	if (right < n && a[right] > a[father])
	{
		father = right;
	}
	if (father != i)
	{
		swap(a[father], a[i]);
		heaptify(a, n, father);
	}
}
void heapSort(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		heaptify(a, n, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		swap(a[i], a[0]);
		heaptify(a, i, 0);
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int a[10] = { 3, 4, 5, 6, 7, 8, 9, 10, 1, 2 };
	heapSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
}