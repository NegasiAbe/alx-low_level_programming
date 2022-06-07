/**
 * _abs -> return absolute value of a number
 *
 * @n: parameter
 *
 * Return: absolute value of a number
 */
#include "main.h"
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
