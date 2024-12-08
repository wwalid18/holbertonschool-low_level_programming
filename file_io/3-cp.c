#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>



#define BUF_SIZE 1024

/**
 * print_fd_error - Prints an error message to the standard error
 * @msg: The message to print
 * @fd_value: The file name or descriptor causing the error
 * @exit_code: The exit code to return
 */
void print_fd_error(const char *msg, int fd_value, int exit_code)
{
	dprintf(STDERR_FILENO, msg, fd_value);
	exit(exit_code);
}

/**
 * print_error - Prints an error message to the standard error
 * @msg: The message to print
 * @arg: The file name or descriptor causing the error
 * @exit_code: The exit code to return
 */
void print_error(const char *msg, const char *arg, int exit_code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another
 * @argc: The number of arguments
 * @argv: The arguments passed
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[BUF_SIZE];
	ssize_t nread, bw;

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", NULL, 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	umask(0000);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to file %s\n", argv[2], 99);
	while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bw = write(fd_to, buffer, nread);
		if (bw == -1)
			print_error("Error: Can't write to file %s\n", argv[2], 99);
	}
	if (nread == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %d\n", "", 100);
	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %d\n", "", 100);
	return (0);
}

