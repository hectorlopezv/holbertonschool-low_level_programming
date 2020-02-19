#include "holberton.h"

/**
 *reverse_array - reverses int array
 *@a: array
 *@n: length of array
 *Return: return reversed string
 *
 */
void reverse_array(int *a, int n)
{
	int b, c;

	int temp;

	b = 0;
	c = n - 1;

	/*swappp*/
	while (c >= b)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		c--;
		b++;
	}
}
