#include "holberton.h"
/**
 * main - prints Holberton
 *
 * Return: Always 0.
 */
int main(void)
{

char hector[] = "Holberton";
int i;
for (i = 0; i <= 8; i++)
{
_putchar(*(hector + i));

}
_putchar('\n');


return (0);
}
