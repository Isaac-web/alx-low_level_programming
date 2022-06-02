#include <stdio.h>
#include <stdlib.h>

/**
 * power_two - returns two to the power a number
 * @pow - exponent to be raise
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */


int power_two(int pow)
{	
	if(pow == 0) 
		return 1;

	return 2 << pow-1;
}

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	int total = 0;
	int int_value = atoi(b);
	
	while(int_value > 0)
	{
		int value = int_value%10;
		total += value * power_two(count);

		int_value /= 10;
		count++;
	}

	return (total);
}
