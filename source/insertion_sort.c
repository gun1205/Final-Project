/*´¡¤J±Æ§Ç*/
#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int a[], int n) 
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j > 0 && a[j - 1] > a[j]) 
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
		printf("loop %d : ", i+1);
		for (j = 0; j < 9; j++)
			printf("%4d", a[j]);
		printf("\n");
	}
}


void insert(void)
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