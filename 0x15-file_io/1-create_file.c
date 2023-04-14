#include "main.h"
#include <string.h>

/**
 * create_file - new function
 * Descitption: creates a new file
 * @filename: ptr to file to be created
 * @text_content: the text to be input
 * Return: 1 on success and -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	/**
	 * open file in write only mode & create it
	 * giving read write permissions to user
	 * if filename or txt content is null return -1
	 * If an error occurs while creating the file return -1
	 * write to the file
	 * if an error occurs, close and return -1
	 * if not, close fd and return 1
	 */
	int fd, bytes_written;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
