#include "holberton.h"
#include <stdio.h>

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *s = "This is a test string for testing";
	char *f = "test";
	//char *s = "hello, world";
	//char *f = "zzza";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}