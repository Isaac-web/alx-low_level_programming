#include <stdio.h>

/**
*
* main - Entry point
*
* return - always returns 0
*/

int main()
{
for(int i = 97; i <= 122; i++) 
{
if(i == 113 || i == 101) continue;
putchar(i);
}
putchar(13);
return (0);
}