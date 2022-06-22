#include "main.h"

/**
 *_sqrt_recursion -calculates the square root of number
 * @n: nuber to be checked
 * return: square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (Sqr_root(n, 1));
}

/**
 *Sqr_root - function that gets de num of sqroot
 *
 * @num: input number
 * @i: Counter variable
 * Return: int
 */

int Sqr_root(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if ((i * i) < num)
		return (Sqr_root(num, i + 1));
	else
		return (-1);
}
