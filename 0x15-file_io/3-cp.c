#include "main.h"

/**
 * handle_file_close - validate file can close
 * @file_desc: file descriptor.
 */
void handle_file_close(int file_desc)
{
	int fd;

	fd = close(file_desc);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * handle_argc_check - validate args count
 * @args: arguments count
 */
void handle_argc_check(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_file_read - validate file can be read
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * @buff: buff allocated for the file read
 * @argv: arguments array
 */
void check_file_read(int fd1, int fd2, char *buff, char *argv[])
{
	if (fd1 == -1 || fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from_file, to_file, file_desc, file_desc2;
	char *buff;

	handle_argc_check(argc);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	from_file = open(argv[1], O_RDONLY);
	file_desc = read(from_file, buff, 1024);
	to_file = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	check_file_read(from_file, file_desc, buff, argv);
	file_desc2 = write(to_file, buff, file_desc);
	if (file_desc2 == -1 || to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	while (file_desc > 0)
	{
		file_desc = read(from_file, buff, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buff);
	handle_file_close(from_file);
	handle_file_close(to_file);
	return (0);
}
