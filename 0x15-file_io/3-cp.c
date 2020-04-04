#include "holberton.h"
#include <string.h>
#define flag  (S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 *main - copy content of one file to another
 *@argc: number of arguments
 *@argv: pointer of strings
 *Return: 0 if success or exit if failure
 */

int main(int argc, char **argv)
{
	int from, fto, n_bytes, file;
	char c[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, flag);
	if (fto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {/*read and write at least one time*/
		n_bytes = read(from, c, 1024);
		if (n_bytes < 0) /* there is no end line and no error*/
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(98);
		}

		file = write(fto, c, n_bytes);
		if (file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (n_bytes == 1024);
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(fto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto);
		exit(100);
	}
	return (0);
}
