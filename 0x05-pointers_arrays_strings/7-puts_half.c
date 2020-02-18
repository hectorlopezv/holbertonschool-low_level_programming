#include "holberton.h"
#include <stddef.h>
/**
 *  * puts_half - check the code for Holberton School students.
 *   *@s: string variable
 *    * Return: Always 0.
 *     */

void puts_half(char *s)
{	/*Guard conditions*/
	if(s[0] == '\0' || s == NULL)
	{


		return;
	}

	else
	{

		int c, a;
		for (a = 0; s[a] != '\0'; a++)
		{
			/*CONTADOR*/
		}

		c = (a %2 == 0) ? a/2 : (a+1)/2;

		for (; s[c] != '\0'; c++)
		{
			_putchar(s[c]);
		}
		_putchar('\n');

	}

}

