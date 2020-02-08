#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');

}

void print_alphabet_x10(void)
{
int i;

for (i = 0; i <= 10; i++)
{
print_alphabet();
}

}

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

}


int _isalpha(int c)
{
if (_islower(c) == 1)
{
return (1);

}
else if (c >= 'A' && c <= 'Z')
{

return (1);

}
else
{
return (0);
}

}




int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}


int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-1 * n);
}

}


int print_last_digit(int n)
{
int c;
c = (n < 0) ? -1 : 1;
_putchar((n % 10) * c + '0');
return ((n % 10) * c);
}


void jack_bauer(void)
{
int i;
int j;
i = 0;
j = 0;
while (j <= 23)
{
while (i <= 59)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar(':');
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar('\n');
i++;
}

i = 0;
j++;

}
}


void times_table(void)
{
int i;
int n;
int p;
n = 0;
i = 0;
p = 0;
while (i <= 9)
{
while (n <= 9)
{
p = i *n;
if (p > 9)
{
_putchar(',');
_putchar(' ');
_putchar(p / 10 + '0');
_putchar(p % 10 + '0');

}
else
{
if (n == 0)
{
_putchar(p + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
}
n++;
}
_putchar('\n');
n = 0;
i++;
}
}


int add(int a, int b)
{
return (a + b);

}


void print_to_98(int n)
{
int c;
c = (n > 98) ? 1 : 0;
if (c)
{
while (n >= 98)
{
printf("%d", n);
if (n == 98)

{
printf("\n");
n--;
continue;
}
printf("%c", ',');
printf("%c", ' ');
n--;
}

}
else
{
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
printf("\n");
n++;
continue;
}
printf("%c", ',');
printf("%c", ' ');
n++;
}


}
}
