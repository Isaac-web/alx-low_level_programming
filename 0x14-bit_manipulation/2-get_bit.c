/**
 *get_bit - returns the bit at a particular index
 *@n - the number operated on
 *@index - is the index starting from 0
 *Returns -  the bit at that particular index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if(!n || !index) 
		return (-1);

	int result = 0, i;
	for(i = 0; i <= index; i++)
	{
		result = n%2;
		n/=2;
	}

	return result;
}
