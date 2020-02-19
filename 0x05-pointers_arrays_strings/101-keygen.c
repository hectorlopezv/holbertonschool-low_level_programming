#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)

{
	int num;

	srand(time(0));
	/*random number between a range*/
	num = (rand() % (upper-lower + 1)) + lower;


	return (0);
}
