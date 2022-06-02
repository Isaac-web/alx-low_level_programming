/**
 * set_bit - sets a bit at particular index
 * @n is is a pointer to the number
 * @index - the index of the number to be manipulated
 * Returns - 1 if successful or -1 if not successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1<<index;
	*n |= mask;
	
	return (1);
}
