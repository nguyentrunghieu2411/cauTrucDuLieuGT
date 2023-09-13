#include<iostream>
#include<algorithm>
using namespace std;
int chiaMang(int a[], int start, int end)
{
	int x = start - 1;
	int chot = a[end];
	for (int i = start; i <= end; i++)
	{
		if (a[i] <= chot)
		{
			x++;
			swap(a[i], a[x]);
		}
	}
	return x;
}
void LomutoSort(int a[], int start, int end)
{
	if (start < end)
	{
		int index = chiaMang(a, start, end);
		LomutoSort(a, start, index - 1);
		LomutoSort(a, index + 1, end);
	}
}
int chia(int a[], int start, int end)
{
	int i = start-1;
	int j = end+1;
	int chot = a[start];
	while (true)
	{
		do
		{
			i++;
		} while (a[i] < chot);
		do
		{
			j--;
		} while (a[j] > chot);
		if (i < j)
		{
			swap(a[i], a[j]);
		}
		else return j;
	}
}
void hoareSort(int a[], int start, int end)
{
	if (start < end)
	{
		int mid = chia(a, start, end);
		hoareSort(a, start, mid);
		hoareSort(a, mid + 1, end);
	}
}
int main()
{
	int b[10] = { 10,46,23,6,42,45,26,34,75,45};
	hoareSort(b, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}