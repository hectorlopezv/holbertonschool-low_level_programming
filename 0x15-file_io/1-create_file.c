#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int fd, ret, i;

	if (filename == NULL)
		return (0);
	fd = open (filename, O_WRONLY | O_TRUNC | O_CREAT , S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != 0; i++)
	{
	};

	ret = write (fd, text_content, i);
	close(fd);
	if (ret == -1)
		return (-1);

	return (1);
}
