#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - return success code 
 *
*/


int main(void){
for(int i = 48; i <= 57; i++)
{
putchar(i);
if(i < 57) 
{
 putchar(44);
 putchar(32);
}
}
putchar(13);
}