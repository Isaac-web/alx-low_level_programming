#include <stdio.h>
/**
 * main - prints the number of argument the program has
 * @argc - number of arguments
 * @argv - array that contains the command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return(0);
}