
#include <stdio.h>
#include<stdlib.h>
void bubble_sort(int a[], int n)
{
	int i = 0, j = 0, tmp;
	for (i = 0; i < n; i++)
	{   // loop n times - 1 per element
		for (j = 0; j < n - i - 1; j++) 
		{ // last i elements are sorted already
			if (a[j] > a[j + 1])
			{  // swop if order is broken
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
void bubble(void) 
{
	int a[100], n, i, d, swap;
	printf("Enter number of elements in the array:\n");
	scanf_s("%d", &n);
	printf("Enter %d integers\n", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	bubble_sort(a, n);
	printf("Printing the sorted array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}

	printf("\n\n");
}