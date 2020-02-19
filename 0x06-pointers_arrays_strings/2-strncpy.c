#include "holberton.h"

/**
 *_strncpy - copy or replace string into desitny
 *@desitny: destinyi string
 *@source: source string
 *@n_bytes: number of bytes
 *Return: return the string replaced
 */

char *_strncpy(char *desitny, char *source, int n_bytes)
{   /* REPLACE STRING.....*/
	/* FILL FIRST POSITION IN THE desitny STRING*/
	int size_source;

	for (size_source = 0; size_source < n_bytes
			&& source[size_source] != '\0'; size_source++)
	{
		desitny[size_source] = source[size_source];
	}
	/* according to the original function if n_bytes > n_source_bytes */
	/*it will fill the remaining with null*/
	for (; size_source < n_bytes; size_source++)
	{
		desitny[size_source] = '\0';
	}
	return (desitny);
}
