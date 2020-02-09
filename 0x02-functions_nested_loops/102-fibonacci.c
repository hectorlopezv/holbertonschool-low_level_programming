#include <stdio.h>
<<<<<<< HEAD
=======
/**
 * main  - fibonacci n=50
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

>>>>>>> 0781df2a42109fe7cfcf1901cf45e0f39a01517a
int main(void)
{
long  n_0=1;
long  n_1=2;
long  nextTerm;
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

