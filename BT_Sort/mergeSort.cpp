#include<iostream>
#include<vector>
using namespace std;
void merge(int a[], int start, int middle, int end)
{
	vector<int>x(a + start, a + middle + 1); // phan tu cuoi khong duoc sao chep nen phai +1 vao end
	vector<int>y(a + middle + 1, a + end + 1);
	int i = 0, j = 0;
	while (i < x.size() && j < y.size())
	{
		if (x[i] > y[j])
		{
			a[start] = y[j];
			start++; j++;
		}
		else
		{
			a[start] = x[i];
			start++; i++;
		}
	}
	while (i < x.size())
	{
		a[start] = x[i];
		start++; i++;
	}
	while (j < y.size())
	{
		a[start] = y[j];
		start++; j++;
	}
}
void mergeSort(int a[], int start, int end)
{
	if (end > start)
	{
		int mid = (end + start) / 2;
		mergeSort(a, start, mid);
		mergeSort(a, mid + 1, end);
	}
	merge(a, start, (end + start) / 2, end);
}

int main()
{
	int b[10] = { 94,2,4,72,1,75,23,52,12,90 };
	mergeSort(b,0,9);
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}