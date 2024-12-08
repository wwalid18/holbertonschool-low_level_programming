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
 * print_name_error - Prints an error message to the standard error
 * @msg: The message to print
 * @file_value: The file name or descriptor causing the error
 * @exit_code: The exit code to return
 */
void print_name_error(const char *msg, const char *file_value, int exit_code)
{
	dprintf(STDERR_FILENO, msg, file_value);
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
	int fd_from, fd_to, nread;
	char buffer[BUF_SIZE];

	if (argc != 3)
		print_name_error("Usage: cp file_from file_to\n", NULL, 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_name_error("Error: Can't read from file %s\n", argv[1], 98);
	umask(0000);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_name_error("Error: Can't write to file %s\n", argv[2], 99);
	while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
			print_name_error("Error: Can't write to file %s\n", argv[2], 99);
	}
	if (nread == -1)
		print_name_error("Error: Can't read from file %s\n", argv[1], 98);
	if (close(fd_from) == -1)
		print_fd_error("Error: Can't close fd %d\n", fd_from, 100);
	if (close(fd_to) == -1)
		print_fd_error("Error: Can't close fd %d\n", fd_to, 100);
	return (0);
}

