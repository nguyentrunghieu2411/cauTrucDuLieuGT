#include<iostream>
#include<vector>
using namespace std;
void insertSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int pos = i - 1;
		while (pos >= 0 && key < a[pos])
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = key;
	}
}
int main()
{
	int b[10] = { 94,2,4,72,1,75,23,52,12,90 };
	insertSort(b, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}