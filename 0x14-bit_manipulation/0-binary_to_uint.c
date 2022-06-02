#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int total = 0;

	if(!b || b > '9' || b < 0)
		return 0;

	for(int i = 0; b[i]; i++)
		total = 2 * total + (b[i] - '0');

	return (total);
}
