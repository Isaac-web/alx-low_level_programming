#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - prints a number of charaters in a file
 * @filename: name of the file
 * @size_t: number of charaters to be printed
 * Returns - the number of characters read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, write_count,  number_of_chars_read;
	char *buffer = malloc(sizeof(char) * letters);

	if(!buffer) 
		return (0);

	if(!filename) 
		return (0);

	fd = open(filename, O_RDONLY);
	if(fd < 0) 
		return (0);

	number_of_chars_read = read(fd, buffer, letters);
	
	if(number_of_chars_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[number_of_chars_read] = '\n';
	close(fd);

	
	write_count = write(STDOUT_FILENO, buffer, number_of_chars_read);
	if(write_count < 0)
	{
		free(buffer);
		return (0);
	}
	
	free(buffer);
	return (write_count);
}
