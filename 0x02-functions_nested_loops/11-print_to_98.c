/**
 * print_to_98 - prints to 98
 * @n: the starting point
 */

#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			  printf("%d, ", n);
		  	n = n + 1;
		}
	} else if (n > 98)
	{
		while (n >= 98)
		{
      printf("%d, ", n);
			n = n - 1;
		}
	}
}
