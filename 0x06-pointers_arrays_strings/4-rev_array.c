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
	for (j = 0; j < i / 2; j++)
	{
		tep = a[j];
		a[j] = *p;
		*p = temp;
		p--;
	}
}
