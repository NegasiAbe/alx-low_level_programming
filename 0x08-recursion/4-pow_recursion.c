#include "main.h"

/**
 * _pow_recursion - calculates power of a number
 * @x:base of the power
 * @y:exponent of the power
 * Return: x to raise y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
