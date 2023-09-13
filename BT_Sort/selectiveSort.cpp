#include<iostream>
#include<vector>
using namespace std;
void selectiveSort(int a[], int n)
{
	for (int i = 0; i < 9; i++)
	{
		int index = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (a[index] > a[j]) { index = j; }
		}
		int t = a[i];
		a[i] = a[index];
		a[index] = t;
	}
}
int main()
{
	int b[10] = { 94,2,4,72,1,75,23,52,12,90 };
	selectiveSort(b, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}