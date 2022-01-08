/*´¡¤J±Æ§Ç*/
#include <stdio.h>
#include <stdlib.h>

int insertion_sort(int arr[], int n) 
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j > 0 && arr[j - 1] > arr[j]) 
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}