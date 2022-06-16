#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int *p, i, temp, j;

	p = a;
	for (i = 1; i < n; i++)
		p++;
	for (j = 0; j < i / 2; j++)
	{
		temp = a[j];
		a[j] = *p;
		*p = temp;
		p--;
	}
}
