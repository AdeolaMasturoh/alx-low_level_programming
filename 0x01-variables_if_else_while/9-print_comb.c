#include <stdio.h>
/**
 * main - entry poiny
 * Return:always return 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 567)
		{
			putchar(44);
			putchat(32);
		}
	}
	putchar(10);

	return (0);
}
