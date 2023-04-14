#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function
 * Description: appends text at the end of a file
 * @filename: ptr to filename
 * @text_content: text to be appended
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/**
	 * open file in write only mode
	 * if filename is NULL, return -1
	 * if fd if -1 return -1
	 * write to file
	 * close and return -1 if error
	 * close and return 1 otherwise
	 */
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
