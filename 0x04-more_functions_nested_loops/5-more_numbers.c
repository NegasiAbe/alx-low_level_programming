#include "main.h"

/**
 * more_numbers -displays numbers 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j;

	
	for (i = 0; i < 10; x++)
	{
		for (j = 0; j < 15; y++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
