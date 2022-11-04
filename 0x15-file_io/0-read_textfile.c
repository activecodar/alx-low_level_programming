#include "main.h"

/**
 * read_textfile - reads file and print it to POSIX standard output.
 * @filename: filepath
 * @letters: letters count to print
 *
 * Return: 0 if error occures bytes count read if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn;
	ssize_t rd;
	char *buff;
	ssize_t wrt;


	if (filename == NULL)
	{
		return (0);
	}

	opn = open(filename, O_RDONLY, 0444);

	if (opn == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	rd = read(opn, buff, letters);

	if (rd == -1)
	{
		return (0);
	}

	wrt = write(STDOUT_FILENO, buff, rd);

	if (wrt == -1)
	{
		return (0);
	}

	free(buff);
	close(opn);

	return (wrt);

}
