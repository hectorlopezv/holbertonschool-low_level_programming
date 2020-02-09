#include <stdio.h>

int main(void)
{
long int n_0=1;
long int n_1=2;
long int nextTerm;
for (int f = 1; f < 50; f++)
{
if (f == 49)
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
