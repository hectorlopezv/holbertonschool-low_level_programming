#include "holberton.h"

/**
 *_strcmp - compare strings
 *@s1: first string
 *@s2: second string
 *Return: a number if certain condition
 */
int _strcmp(char *s1, char *s2)

{

	/**
	 *     * Here we have two strings str1 = "jkl" and str2 = "jkq".
	 * Comparison starts off by comparing the first character from str1 and
	 * str2 i.e 'j' from "jkl" and 'j' from "jkm", as they are equal, the next
	 * two characters are compared i.e 'k' from "jkl" and 'k' from "jkm", as
	 * they are also equal, again the next two characters are compared i.e 'l'
	 * from "jkl" and 'q' from "jkm", as ASCII value of 'q' (113) is greater
	 * than that of 'l' (108),
	 * Therefore str2 is greater than str1 and strcmp() will return 5
	 * ( i.e 113-108 = 5 ) .
	 */

	int i, resta;

	resta = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			resta = s1[i] - s2[i];
			return (resta);
		} else if (s1[i] > s2[i])
		{
			resta = s1[i] - s2[i];
			return (resta);
		}
	}

	return (resta);

}

