#include "main.h"
/**
 * _strncat - function to append some character
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
