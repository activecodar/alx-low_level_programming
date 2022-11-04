#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filepath.
 * @text_content: content to write to file.
 *
 * Return: 1 if sucess else -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int len;
	int fd;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fd = write(file_desc, text_content, len);

	if (fd == -1)
	{
		return (-1);
	}
	close(file_desc);
	return (1);
}
