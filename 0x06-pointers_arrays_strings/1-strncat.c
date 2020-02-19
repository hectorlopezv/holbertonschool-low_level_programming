#include "holberton.h"
#include <stdio.h>

#include "holberton.h"

/**
 * _strncat - concatenate strings
 *@desitny: desitny string
 *@source: source string
 *@n_bytes: number of bytes.
 *Return: a string == pointer
 */

char *_strncat(char *desitny, char *source, int n_bytes)
{
	/* counts desitny legnth counting '\0*/
	int size, size_source;

	for (size = 0; desitny[size] != '\0'; size++)
	{
		/* count size of dest including null*/
	}

	for (size_source = 0; size_source < n_bytes &&
			source[size_source] != '\0'; size_source++)
	{
		desitny[size + size_source] = source[size_source];
	}

	desitny[size_source + size] = '\0';/* add null character*/
	return (desitny);

}
