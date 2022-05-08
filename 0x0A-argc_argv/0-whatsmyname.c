#include <stdio.h>
/**
 *
 * main: prints the name of the program
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{	
	printf("%s\n", argv[0]);
	
	return(0);
}
