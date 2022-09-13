#include "main.h"
/**
 * main- entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
