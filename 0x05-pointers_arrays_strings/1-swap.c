#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: int 1
 * @b: int 2
 * Return: 0
 */

void swap_int(int *a, int *b);
{

	*a = *b;
	*b = *a - *b;
	*a = *a - *b;
}
