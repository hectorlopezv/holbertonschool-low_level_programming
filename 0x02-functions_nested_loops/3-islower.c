#include "holberton.h"

/**
 *_islower - prints if a number is positive
 *@c: the value to check
 *Return: 1 if is the alphabet
 * on error return 0
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
