#include <stdio.h>
/**
 * main - prints the number of arguments the program has
 * @argc: number of argments
 * @argv: contains the command line arguements
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
		printf("%s\n",argv[i]);		
	return (0);
}
