#include <stdio.h>
/**
 * main - entry point
 * Return:Always return 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
