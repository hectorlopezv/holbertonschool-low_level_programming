#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)

{
	int num;

	srand(time(0));
	/*random number between a range*/
	/*num = (rand() % (62-0 + 1)) + 0;*/

	int sum, i, r;

	char a[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ012345678";
	char password[100];


	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
		r = (rand() % (62 - 0 + 1)) + 0;
		password[i] = a[r];
		sum += password[i];
		i++;
	}

	r = 2772 - sum;
	password[i] = r;
	printf("%s\n",  password);

	return (0);
}
