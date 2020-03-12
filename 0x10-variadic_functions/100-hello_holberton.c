#include <unistd.h>
#include <stdio.h>

int main(void)
{
	syscall(1, 0, "Hello, Holberton\n",16);
	return (0);
}
