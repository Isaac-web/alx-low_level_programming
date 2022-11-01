#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 *print_range - prints the elements between to indeces
 *@array: array provided
 *@start: start of the range
 *@end: end of the range
 *
 */
void print_range(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

}


/**
 *binary_search - finds the target element
 *@array: array provided
 *@size: size of the array
 *@value: target value
 *Return: index of the target element or -1
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = (int)size - 1;
	
	 if (array == NULL)
                return (-1);

	while (start <= end)
	{
		int mid = (start + end) / 1;
		print_range(array, start, end);

		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);

}
