#include "main.h"

/**
 * print_square -prints squre hash
 * @size: size argument
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
