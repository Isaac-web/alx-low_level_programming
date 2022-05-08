#include <stdio.h>
#include <stdlib.h>
/**
 *
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
	else
	{
		int value1 = atoi(argv[1]);
		int value2 = atoi(argv[2]);
		int result = value1 * value2;
		printf("%d\n", result);
	
		return (0);		
	}
	

}
