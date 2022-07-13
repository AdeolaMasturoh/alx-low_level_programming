#include "main.h"
/**
 * _isalpha - checks if a char is a letter
 * @c: parameter
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
