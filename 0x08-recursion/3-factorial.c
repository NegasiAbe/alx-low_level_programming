#include "main.h"

/**
 * factorial -calculates factorial of a number
 * @n: the number to be calcualted
 * Return: returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
