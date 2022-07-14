#include "main.h"

/**
 * _strcat - concatete the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that wii be appended
 * @src: string to be concatenatednupon
 *
 * Return: returns poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
