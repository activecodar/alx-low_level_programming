#include "main.h"
/**
 * append_text_to_file - append text at the end of a file.
 * @filename: filepath
 * @text_content: characters to append
 *
 * Return: 1 if success -1 in failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int fd;
	int len;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_WRONLY | O_APPEND, 0660);

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
	close(fd);
	return (1);
}
