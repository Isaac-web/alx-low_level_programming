#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two numbers
 * @argc - number of arguments to the program
 * @argv - contains command line arguments
 * Return: returns 0 - success or 1 - error
 */
int main(int argc, char *argv[])
{
	if(argc < 3)
	{
		printf("Error\n");
		return (1);
	}	
	printf("%d\n", atio(argv[0]) * atoi(argv[2]));
	return (0);
}
