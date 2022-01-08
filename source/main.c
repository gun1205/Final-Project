#include <stdio.h>
#include <stdlib.h>
#include <sort.h>

int main(void) 
{
	int i;
	int arr1[] = { 3,2,1,7,6,5,9,8,7 };
	int arr2[] = { 30,20,10,70,60,50,90,80,70 };
	int arr3[] = { 300,200,100,700,600,500,900,800,700 };

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
			output_arr(arr1, 9);
			break;

		case 2:
			insertion_sort(arr2, 9);
			output_arr(arr2, 9);
			break;

		case 3:
			quick_sort(arr3, 0, 8);
			output_arr(arr3, 9);
			break;
		}
	}
	return 0;
}