#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0. O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, c;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));

	if (filename == NULL || buffer == NULL)
	{
		free(buffer);

		return (0);
	}

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	b = read(a, buffer, letters);
	if (b == -1)
		return (0);

	buffer[b] = '\0';

	c = write(STDOUT_FILENO, buffer, b);
	if (c != b)
		return (0);
	
	free(buffer);

	close(a);

	return (b);
}
