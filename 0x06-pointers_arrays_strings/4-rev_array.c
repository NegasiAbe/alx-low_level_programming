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
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; j < i / 2; j++)
	{
		aux = a[j];
		a[j] = *p;
		*p = temp;
		p--;
	}
}
