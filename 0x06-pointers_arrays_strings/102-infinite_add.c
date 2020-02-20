#include "holberton.h"

int largo(char *s);
void rev_string(char *s);


/**
 *infinite_add - add two strings
 *@n1: 1 string
 *@n2: 2 string
 *@r: buffer
 *@size_r: size of buffer
 *Return: return string added
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c, largo_s1, largo_s2, carry, contador, sum1, sum2, sum_total,
		d1, d2;

	largo_s1 = 0;/*length of n1*/
	largo_s2 = 0;/*length of n2*/
	carry = 0;/* carry for the addition*/
	contador = 0;/* counter for filling the resulting string*/
	largo_s1 = largo(n1) - 1;
	largo_s2 = largo(n2) - 1;
	int largo_r = size_r - 1;/* porque no contadmos el nulo*/



	if (size_r == (largo_s1 + 2) || size_r == (largo_s2 + 2))
	{  /*edge case 1*/
		return (0);
	}

	if (size_r <= largo_s1 + 2 || size_r <= largo_s2 + 2)
	{  /* edge case 2*/
		return (0);
	}

	c = (largo_s1 < largo_s2) ? largo_s2 : largo_s1;/*greathest string*/

	for (; largo_r >= 0; largo_r--)/* loop backwards*/
	{
		if (largo_s1 >= 0  || largo_s2 >= 0)
		{
			sum1 = (n1[largo_s1] - '0'  >= 0 && n1[largo_s1] - '0' <= 9) ?
				n1[largo_s1] - '0' : 0;
			/* if char is a number take it if not put a 0 in it*/
			sum2 = (n2[largo_s2] - '0'  >= 0 && n2[largo_s2] - '0' <= 9) ?
				n2[largo_s2] - '0' : 0;

			if (largo_s2 < 0)
			{   /*case when one string is greather thant the other we jut out 0*/
				/* because <0 is no a valid index in array*/
				sum2 = 0;
			}
			if (largo_s1 < 0)
			{
				/*case when one string is greather thant the other we jut out 0*/
				/* because <0 is no a valid index in array*/
				sum1 = 0;
			}

			sum_total = sum1 + sum2 + carry;

			d2 = sum_total / 10;/*take if n>0*/
			d1 = sum_total % 10;

			carry = d2;
			r[contador] = d1 + '0';/*assign */
			if (contador == c  && sum_total > 9)
			{

				r[contador + 1] = d2 + '0';
				contador++;
			}

			largo_s2--;
			largo_s1--;
			contador++;

		}
		else
		{   /* going to break when the addition is completed*/
			r[contador] = '\0';
			rev_string(r);/*reverse the string for the correct output*/
			break;
		}

	}

	return (r);
}

/**
 * rev_string - reverse string
 * @s: string
 * Return: return reversed string
 */
void rev_string(char *s)
{

	int b, c;
	char holder;

	int length = _strlen(s);

	b = 0;
	c = length;

	while (c >= b)
	{
		holder = s[b];
		s[b] = s[c];
		s[c] = holder;
		c--;
		b++;
	}
}

/**
 * _strlen - length of a string
 * @s: is the string
 * Return: return length
 */

int _strlen(char *s)
{
	int counter, a;

	counter = 0;
	a = 0;

	while (s[a] != '\0')
	{
		++counter;
		++a;
	}
	--counter;

	return (counter);
}

/**
 *largo - largo del string
 *@s1: string number 1
 *Return: hello master
 */
int largo(char *s1)
{
	int i;

	for (i = 0 ; s1[i] != '\0'; i++)
	{

	}

	return (i);
}

