#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 *
 */

void print_most_numbers(void)
{
	int i, num;

	num = 0;

	for (i = 0; i <= 9; i++)
	{
		if ((num == 2) || (num == 4))
		{
			num++;
			continue;
		}
		num++;
		_putchar((i) + '0');
	}
	_putchar('\n');
}
