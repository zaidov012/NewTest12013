#include <iostream>
using namespace std;

int func(int arr[], int n)
{
	int INT_SIZE = sizeof(int);
	int result = 0;

	int x, sum;

	for (int i = 0; i < INT_SIZE; i++)
	{
		sum = 0;
		x = (1 << i);
		for (int j = 0; j < n; j++)
		{
			if (arr[j] & x)
				sum++;
		}

		if ((sum % 3) != 0)
			result = result | x;
	}

	return result;
}

int main()
{
	int arr[] = { 1,1,1,2,2,2,9,4,4,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << func(arr, n);
}