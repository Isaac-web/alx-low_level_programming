#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
* main - entry point
*
* Return - returns 0
*
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n;
last%=10;
last = abs(last);

if(last > 5)
printf("The last digit of %d is greater than %d", last, 5);
else if (last < 6)
printf("The last digit of %d is less than %d and not %d", last, 6, 0);
else if (last == 0)
printf("The last digit of %d is equal to %d", last, 0);

return (0);
}