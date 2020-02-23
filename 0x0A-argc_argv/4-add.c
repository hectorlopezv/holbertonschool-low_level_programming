#include <stdio.h>

/**
 *main - print the multiplication of two numbers
 *@argc: is the numbers of counters
 *@argv: is the array of arguments
 *Return: return multiplication of a,b
 */

int _atoi(char *s);

int adding(char **argv);

int main(__attribute__((unused)) int argc, char *argv[])
{

	//a = 0;
	//	printf("%s\n",*argv);
	//	printf("%d\n",argc - 1);
	return (adding(argv+1));
}

int adding(char ** s)
{

	int n;

	n = _atoi(*s);

	printf("%d",n);

	if (!*s)
	{
		return 0;
	}

	if ((**s >= 32 && **s <=47) ||(**s > 57 && **s <= 126 ) )
	{
		printf("Eror\n");
		return (1);
	}

	if (**s >= '0' && **s <= '9')
	{
		return _atoi(*s) +  adding(s+1);
	}

	return (0);

}



int _atoi(char *s)
{
	int n, contador;
	int str, y, i;

	str = 0;
	y = 0;
	i = 0;
	n = 1;
	contador = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if ((contador > 0) && (s[i] == ' '))

		{ /* break space*/
			str = str;
			break;
		}

		if (s[i] == '-')
		{
			n = n * -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			contador++;
			y = s[i] - '0';

			str = (str * 10) + y;
		}
	}

	//printf("%d\n",str);
	return (str * n);
}
