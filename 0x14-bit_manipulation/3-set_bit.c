/**
 * set_bit - sets a bit at particular index
 * @n: pointer to the number
 * @index: index
 * Returns: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{	
	if(index > sizeof(*n) * 8)
		return (-1);

	*n |= (1<<index);
	
	return (1);
}
