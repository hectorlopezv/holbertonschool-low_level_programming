#include <stdio.h>
/**
  * main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
char *str[] = { "char", "int", "long int", "long long int" ,"float"};
for (int i = 0; i<=4; i++)
{
	printf("Size of a %s: %lu bytes(s)\n", str[i], sizeof(i));

}
	return (0);

}

