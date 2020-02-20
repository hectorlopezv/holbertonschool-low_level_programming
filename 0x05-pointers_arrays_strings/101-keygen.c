#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to generate random password
 *
 * description: find checksum value from objdump
 *
 * Return: Return generated password
 */

int main(void)
{
	int sum, i, r;

	char a[87] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-={}[]:><,.~";
	char password[124];
	
	/*random number between a range*/
	/*num = (rand() % (upper-lower + 1)) + lower;*/
	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
		r = rand() % 86;
		password[i] = a[r];
		sum += password[i];
		i++;
	}
	r = 2772 - sum;
	password[i] = r;
	printf("%s\n",  password);
	return (0);
}
