#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"


/**
 *linear_search - search algorithm
 *@array: array to be searched
 *@size: size of the array
 *@value: the target value
 *Return: the index of the element found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		printf("Value checked array[%d] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);

	return (-1);
}
