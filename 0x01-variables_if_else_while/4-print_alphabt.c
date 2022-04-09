#include <stdio.h>

/**
 *main - prints all the letters expcept q
 *and e
 *
 *Return - Always returns 0
 */
int main(void)
{
	char i = 'a';
	while(i < 'z')
	{
		if(i == 'e' || i == 'q') continue;
		putchar(i);
	}
}
