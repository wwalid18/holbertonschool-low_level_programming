#include "main.h"

/**
 * read_textfile - Reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int discriptor;
	ssize_t br, bw, total = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	discriptor = open(filename, O_RDONLY);
	if (discriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(discriptor);
		return (0);
	}
	br = read(discriptor, buffer, letters);
	if (br == -1)
	{
		free(buffer);
		close(discriptor);
		return (0);
	}
	while (total < br)
	{
		bw = write(STDOUT_FILENO, buffer + total, br - total);
		if (bw == -1)
		{
			free(buffer);
			close(discriptor);
			return (0);
		}
		total += bw;
	}
	free(buffer);
	close(discriptor);
	return (total);
}
