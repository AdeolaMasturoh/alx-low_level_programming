#include "main.h"

/**
 * swap int -> given two integers swap the values they are holiding
 * @a: parameter1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
