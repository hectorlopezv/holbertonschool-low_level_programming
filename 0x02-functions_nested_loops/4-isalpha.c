#include "holberton.h"
/**
 * _isalpha - checks for upper and lower case
 * @c: The character to check
 *
 * Return: On success 1.
 * O otherwise
 */

int _isalpha(int c)
{
if (_islower(c) == 1)
{
return (1);

}
else if (c >= 'A' && c <= 'Z')
{

return (1);

}
else
{
return (0);
}

}

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

}
