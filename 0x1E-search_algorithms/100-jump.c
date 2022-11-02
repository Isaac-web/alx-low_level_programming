#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 *min - finds the min of two numbers
 *@a: first number
 *@b: second number
 *Return: returns the minimum
 */
int min(int a, int b)
{
	return (a > b ? b : a);
}



/**
 *jump_search - finds the index of an element using blocks
 *@array: array provided
 *@size: size of the array
 *@value: value to be searched for
 *Return: the index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = sqrt(size);
	int jump_count = 0;

	while (array[min(high, size) - 1] < value)
	{
		low = high;
		high += sqrt(size);
		jump_count++;
		if (low > (int)size)
			return (-1);
	}

	while (array[low] < value)
	{
		low++;
		if (low == min(high, size))
		{
			return (-1);
		}
	}

	if (array[low] == value)
		return (low);

	return (-1);
}
