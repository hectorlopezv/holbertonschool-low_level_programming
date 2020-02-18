#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 *@str: string variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int lenght, i;

	lenght = _strlen(str);

	if (lenght % 2 ==  0)/* even*/
	{
		lenght = lenght / 2;
	} else if (lenght % 2 != 0)/* odd*/
	{
		lenght = (lenght - 1) / 2;
	}
	str += lenght;
	for (i = lenght; i < lenght * 2; i++, str++)
	{

		_putchar(*str);


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

	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;/* moving the pointer one index*/
		count++;
	}
	return (count);
}
