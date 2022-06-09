#include "main.h"

/**
 * print_line -prints underscore ntimes
 * @n:argument to be repetad
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
