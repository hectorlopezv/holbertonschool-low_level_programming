#include "holberton.h"
#include <stddef.h>

/**
 * puts_half - check the code for Holberton School students.
 *@s: string variable
 * Return: Always 0.
 */

void puts_half(char *s)
{	/*Guard conditions*/
	if (s == NULL)
	{ /* missing the S[0] == '0' --> Empty condition..betty>*/
		return;
	}
	else
	{

		int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			/*CONTADOR*/
		}
		i++;/* for the 0 case*/

		/* passes test case 0 ,123 ,0123456789,01234567898,empty,NULL*/
		/* 5/2==2 */

		for (i /= 2; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');

	}

}

