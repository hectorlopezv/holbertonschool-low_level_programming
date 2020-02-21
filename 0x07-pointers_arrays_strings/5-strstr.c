#include "holberton.h"
/**
 *_strstr - give first ocurrence of a substring
 *@s1: string
 *@s2: substring
 *Return: null or pointer
 */

char *_strstr(char *s1, char *s2)
{
	int size_s2, iterator_s1, counter_rep, suma_s1, suma_s2;
	char *eturn_pointer;

	suma_s2 = 0;
	suma_s1 = 0;
	counter_rep = 0;

	for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
	{
		suma_s1 += s2[size_s2];
	}
	--size_s2;
	while ((eturn_pointer = _strpbrk(s1, s2)))
	{
		counter_rep = 0;
		suma_s2 = 0;
		for (iterator_s1 = 0; iterator_s1 <= size_s2; iterator_s1++)
		{
			if (*eturn_pointer == s2[iterator_s1])
			{
				counter_rep++;
				eturn_pointer++;
				suma_s2 += s2[iterator_s1];
			}
		}
		eturn_pointer -= counter_rep;
		if (suma_s2 == suma_s1)
		{
			break;
		}

		s1++;
	}

	return (eturn_pointer);
}
/**
 *_strpbrk - set bytes of first ocurrence
 *@s: string
 *@accept: template string
 *Return: s pointer or null
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == accept[0])
		{
			return (s);
		}
		++s;
	}
	return (0);
}
