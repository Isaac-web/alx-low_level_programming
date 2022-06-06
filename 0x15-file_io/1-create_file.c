#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: input to the file
 * Returns - 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_count;

	if(!filename)
		return (-1);
	
	
	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL | O_TRUNC, 0600);
	if(fd < 0)
		return (-1);

	if(text_content)
	{
		write_count = write(fd, text_content, strlen(text_content));
		if(write_count < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
