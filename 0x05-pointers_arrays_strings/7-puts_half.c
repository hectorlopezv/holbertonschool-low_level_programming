#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 *@str: string variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int lenght;

	lenght = _strlen(str);

	if (lenght % 2 ==  0)/* even*/
	{
		lenght = lenght / 2;

	} else if (lenght % 2 != 0)/* odd*/
	{
		lenght = (lenght - 1) / 2;
	}

	str += lenght;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}



/**
 * _strlen - check the code for Holberton School students.
 *@s: string variable
 * Return: Always 0.
 */


int _strlen(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++;/* moving the pointer one index*/
		count++;
	}
	count--;
	return (count);
}
