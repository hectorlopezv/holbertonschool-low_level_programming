#include "holberton.h"

/**
 *append_text_to_file - create_file
 *@filename: filename
 *@text_content: text_content
 *Return: return 1 on success and 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret, i;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}

	for (i = 0; text_content[i] != 0; i++)
	{
	};

	ret = write(fd, text_content, i);
	close(fd);
	if (ret == -1)
		return (-1);

	return (1);
}
