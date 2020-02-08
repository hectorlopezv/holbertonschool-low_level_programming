#include <stdio.h>

int main(void)
{
int i;
int b;
int c;
for ( i=0 ; i<= 9;i++)
{
for (b=i+1; b<=9;b++)

{
for (c=b+1; c<=9;c++){
if (i ==b){continue;}
putchar(i+'0');
putchar(b+'0');
putchar(c + '0');
if (i==7 && b ==8 && c ==9){continue;}
putchar(',');
putchar(' ');



}

}
}
putchar('\n');
return (0);
}