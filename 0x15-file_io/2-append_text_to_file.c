#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


/**
 * append_text_to_file - adds text to a file
 * @filename: name of the file
 * @text_content: input to the file
 * Returns: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count;
	
	if(!filename)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0665);

	if(text_content)
	{
		write_count = write(fd, text_content, strlen(text_content));
		if(write_count < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
