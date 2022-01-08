#include <stdio.h>
#include <stdlib.h>
#include <sort.h>

int main(void) 
{
	int i,h=0;
	int arr1[] = { 6, 26, 65, 12, 81, 34, 56, 94, 72 };
	int arr2[] = { 6, 26, 65, 12, 81, 34, 56, 94, 72 };
	int arr3[] = { 6, 26, 65, 12, 81, 34, 56, 94, 72 };

	while (1)
	{
		printf("Sorting\n");
		printf("If enter 0 break\n");
		printf("If enter 1 bubble_sort\n");
		printf("If enter 2 insertion_sort\n");
		printf("If enter 3 quick_sort\n");
		printf("Enter a number(0~3) : ");
		scanf_s("%d", &i);
		printf("\n");

		switch (i)
		{
		case 0:
			return 0;
			break;


		case 1:
			bubble_sort(arr1, 9);
			//output_arr(arr1, 9);
			break;

		case 2:
			insertion_sort(arr2, 9);
			//output_arr(arr2, 9);
			break;

		case 3:
			h = 0;
			quick_sort(arr3, 0, 8);
			output_arr(arr3, 9);
			break;
		}
	}
	return 0;
}