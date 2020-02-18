#include "holberton.h"


/**
 * _strlen - check the code for Holberton School students.
 *@s: is a string
 * Return: length of a string.
 */


int _strlen(char *s)
{

	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;/* moving the pointer one index*/
		count++;
	}
	return (count);
}
