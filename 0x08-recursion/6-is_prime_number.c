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
	return (find_Prim(n, 2));
}

/**
 * find_Prim - function that gets if num is 0 or 1
 *
 * @num: input number
 * @i: Counter variable
 * Return: int
 */

int find_Prim(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (find_Prim(num, i + 1));
}
