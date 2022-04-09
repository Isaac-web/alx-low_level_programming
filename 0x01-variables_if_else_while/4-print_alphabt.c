#include <stdio.h>

/**
 *main - prints all the letters expcept q
 *and e
 *
 *Return - Always returns 0
 */
int main(void)
{
	for(char i = 'a'; i <= 'z'; i++)
	{
		if(i == 'e' || i == 'q') continue;
		putchar(i)
	}
}
