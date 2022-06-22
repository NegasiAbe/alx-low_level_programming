#include "main.h"

/**
 * _pow_recursion - calculates power of a number
 * @x:base of the power
 * @y:exponent of the power
 * Return: x to raise y
 */
int _pow_recursion(int x, int y)
{
	int p = y, b = x, i;

	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	for (i = 1; i < y; i++)
	{
		x = x * b;
	}
	return (x);
}
