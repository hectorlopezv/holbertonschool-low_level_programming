#include "holberton.h"

/**
 *_strcmp - compare strings
 *@s1: first string
 *@s2: second string
 *Return: a number if certain condition
 */

int _strcmp(char *s1, char *s2)

{
	int sum_s1, sum_s2;
	int i, j, condition;

	sum_s1 = 0;
	sum_s2 = 0;
	condition = 0;
	/* uppercase sum 2*/
	/* lowercase sum 1*/

	/* loop for s1*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		sum_s1 += s1[i];

	}

	/* loop for s2*/
	for (j = 0; s2[j] != '\0'; j++)
	{
		sum_s2 += s2[j];

	}

	condition = s1 - s2;


	if (s2 == s1)
	{
		condition = 0;
	}

	return (condition);
}
