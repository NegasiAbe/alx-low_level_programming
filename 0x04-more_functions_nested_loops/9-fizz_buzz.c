#include "main.h"
#include<stdio.h>

/**
 * main -prints numbers 1 to 100 followed by newline
 * but it prints fizz the number is multiple of 3
 * It prints Dizz if the nuber is multiple of 5
 * prints fizzDuzz if it is multipleof 3 and 5
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0; &&i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 &&i % 3 != 0);
			printf("Buuzz");
		else if (i % 5 == 0 &&i % 3 == 0)
			printf("FizzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf("%d ", i);
	}
	printf("\n");
}
