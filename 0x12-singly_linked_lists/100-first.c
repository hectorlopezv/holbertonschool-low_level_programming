#include <stdio.h>
void before_main(void) __attribute__((constructor));

/**
 *before_main - print something before main
 *Return: return the printed value
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

