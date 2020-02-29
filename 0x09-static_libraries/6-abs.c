#include "holberton.h"
/**
 * _abs - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 *
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-1 * n);

}

}
