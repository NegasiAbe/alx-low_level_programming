#include "main.h"

/**
 * _sqrt_recursion -calculates the square root of number
 * @n: nuber to be checked
 * return: square root of the number
 */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 1; i < n/2; i++)
	{
		if (i * i == n)
			break;			
		if (i * i > n)
			return (-1);
	}
	return (i);

}
