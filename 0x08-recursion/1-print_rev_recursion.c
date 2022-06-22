#include "main.h"

/**
 * _print_rev_recursion -> prints string in 
 * reverse
 * @s: string to be reversed
 * Return: no value
 */
void _print_rev_recursion(char *s)
{
	int len;

	while(*s)
	{
		len++;
	s++;
	}
	while (*s)
	{
		_putchar(*(s - 1));
	s--;
	}
	_putchar('\n');

}
