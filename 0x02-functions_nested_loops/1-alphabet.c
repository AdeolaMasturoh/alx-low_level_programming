#include "main.h"
/**
 * main - prints alphabets in lower case
 * Return: always return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
