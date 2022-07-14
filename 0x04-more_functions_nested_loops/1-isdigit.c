#include "main.h"
/**
 * _isdigit - function that verify if a char is a digit or not
 * @c: parameter
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
