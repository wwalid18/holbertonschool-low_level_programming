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
 * print_error - Prints an error message to the standard error
 * @msg: The message to print
 * @arg: The file name or descriptor causing the error
 * @exit_code: The exit code to return
 */
void print_error(const char *msg, const char *arg, int exit_code)
{
	if (arg)
		dprintf(STDERR_FILENO, msg, arg);
	else
		dprintf(STDERR_FILENO, "%s", msg);
	exit(exit_code);
}

/**
 * print_error_int - Prints an error message to the standard error
 * @msg: The message to print
 * @arg: The file name or descriptor causing the error
 * @exit_code: The exit code to return
 */
void print_error_int(const char *msg, int arg, int exit_code)
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

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}
	nread = read(fd_from, buffer, sizeof(buffer));
	if (nread == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}
	else if (nread > 0)
	{
		while (nread > 0)
		{
			bw = write(fd_to, buffer, nread);
			if (bw == -1)
			{
				close(fd_from);
				close(fd_to);
				print_error("Error: Can't write to %s\n", argv[2], 99);
			}
			nread = read(fd_from, buffer, sizeof(buffer));
		}}
	if (close(fd_from) == -1)
		print_error_int("Error: Can't close fd %i\n", fd_from, 100);
	if (close(fd_to) == -1)
		print_error_int("Error: Can't close fd %i\n", fd_to, 100);
	return (0);
}
