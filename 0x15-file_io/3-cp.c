#include "main.h"

/**
 * main - entry point
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0 on success, or an error code on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	return (copy_file(argv[1], argv[2]));
}

/**
 * copy_file - new function
 * Description: copies a file from one folder to another
 * @file_from_path: file source
 * @file_to_path: file destination
 * Return: int
 */

int copy_file(char *file_from_path, char *file_to_path)
{
	int file_from, file_to, bytes_read, bytes_written;
	char *buffer;

	file_from = open(file_from_path, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_path);
		return (98);
	}
	file_to = open(file_to_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to_path);
		return (99);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		return (101);
	}
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to_path);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_path);
		return (98);
	}
	free(buffer);
	close_filedescriptor(file_from);
	close_filedescriptor(file_to);
	return (0);
}

/**
 * close_filedescriptor - function name
 * Description: closes file descriptor
 * @fd: file descriptor
 * Return: void
 */

int close_filedescriptor(int fd)
{
	int res;

	res = close(fd);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (res);
}
