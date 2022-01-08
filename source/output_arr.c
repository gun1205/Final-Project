/*¿é¥X*/
#include <stdio.h>
#include <stdlib.h>

int output_arr(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]); 
	}
	printf("\n");
}


/*int output_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("loop %d", i);
		for (int j = 0; j < n; j++)
		{
			printf("%4d ", arr[j]);
		}
		printf("\n");
	}
}*/
