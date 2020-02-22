int _strlen_recursion(char *s);
int is_palindrome(char *s);
int comparador(int i, int size, char *s, int add);

/**
 * is_palindrome -  sss
 * @s: string
 * Return: return something
 */

int is_palindrome(char *s)
{
	int i, size, add;

	i = 0;
	add = 0;
	size = _strlen_recursion(s);
	add = (size % 2 != 0) ? 2 : 1;

	return (comparador(i, size - 1, s, add));
}

/**
 * comparador - compare
 * @i: i
 * @size: size
 * @s: string
 * @add: addition depending if n is odd or even
 * Return: return value
 */

int comparador(int i, int size, char *s, int add)
{
	if (s[0] == '\0')
	{
		return (0);
	}

	if (i + add == size)
	{
		return (1);
	}

	if (s[i] == s[size])
	{
		return (comparador(i + 1, size - 1, s, add));
	}
	return (0);
}

/**
 * _strlen_recursion - legth of a string
 * @s: string
 * Return: return legth
 */

int _strlen_recursion(char *s)
{

	if (!*s)
	{

		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}

