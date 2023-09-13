#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
int main()
{
	int b[10] = { 94,2,4,72,1,75,23,52,12,90 };
	bubbleSort(b, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}