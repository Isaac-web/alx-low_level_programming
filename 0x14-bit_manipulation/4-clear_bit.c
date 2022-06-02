#include "main.h"

/**
 *
 * clear_bit - clears the bit at an index
 * @n: number
 * @index: index
 * Returns: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if(index > sizeof(*n) * 8)
		return (-1);
	
	*n &= ~(1<<index);
	return (1);
}
