#include <stdio.h>

int clear_bit(unsigned long int *n, unsigned int index)
{
	if(index > sizeof(*n) * 8)
		return (-1);
	
	*n &= ~(1<<index);
	return (1);
}



int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
