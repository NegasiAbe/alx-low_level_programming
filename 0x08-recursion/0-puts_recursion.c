#include "main.h"

/*
 *_puts_recursion -prints a string
 * @s: string to be printed
 * return: no value
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
	s++;
	}
	_putchar ('\n');
}
