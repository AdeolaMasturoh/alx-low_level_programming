#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return:Always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf(" %d and is greater than 5");
	}
	else if (n == 0)
	{
		printf("%d and is 0");
	}
	else
	{
		printf("%d and is less than 6 and not 0");
	}
	return (0);
}
