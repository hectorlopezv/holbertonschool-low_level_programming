#include <unistd.h>

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
int a;
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
c = (n<0) ? -1 : 1;
_putchar((n % 10)*c + '0');
return ((n % 10)*c);
}


