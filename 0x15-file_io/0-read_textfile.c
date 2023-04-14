#include "main.h"

/**
 * read_textfile - new function
 * Description: reads a txt file and prints it to POSIX
 * @filename: ptr to file
 * @letters: number of letters to read
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/**
	 * Check if filename is NULL & return 0 if so
	 * Open file, if it can't open return 0
	 * Assign memory to the buffer or close & return 0 if fails
	 * Read from file, if it fails, close file, free memory & return 0
	 * Write to the file, if it fails close file, free and return 0
	 * If it succeeds, close file, free buffer and return letters
	 */
	ssize_t fd, bytes_read, bytes_written;
	char *buffer; /*stores txt*/

	if (filename == NULL)
		return (0);
	/*create file ptr and open file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read || bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}

