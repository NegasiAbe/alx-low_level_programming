#include "main.h"

/**
 * is_prime_number -checked if a number is prime
 * @n: the number to be checked
 * Return: returns 1 if number is prime 0 other wise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrim(n, 2));
}

/**
 * getNumPrim - function that gets if num is 0 or 1
 *
 * @num: input number
 * @i: Counter variable
 * Return: int
 */

int getNumPrim(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (getNumPrim(num, i + 1));
}
