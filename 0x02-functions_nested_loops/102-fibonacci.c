#include <stdio.h>
/**
 * main  - fibonacci n=50
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
long n_0 = 1;
long n_1 = 2;
long nextTerm;
int f;
for (f = 1; f <= 50; f++)
{
if (f == 50)
{
printf("%ld\n", n_0);
}
else
{
printf("%ld, ", n_0);
}
nextTerm = n_0 + n_1;
n_0 = n_1;
n_1 = nextTerm;
}
return (0);

}

