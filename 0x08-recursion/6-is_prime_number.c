#include "main.h"

/**
 * is_prime_number -checked if a number is prime
 * @n: the number to be checked
 * Return: returns 1 if number is prime 0 other wise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
