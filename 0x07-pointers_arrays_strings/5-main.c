#include "holberton.h"
#include <stdio.h>

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *s = "GeeksforGeeks";
	char *f = "for";
	//char *s = "hello, world";
	//char *f = "zzza";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}