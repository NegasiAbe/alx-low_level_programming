#include "main.h"

/**
 * swap_int -swaps values of two integers by swapingers by swaping thier addres
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
