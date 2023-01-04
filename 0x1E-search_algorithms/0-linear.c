#include<stdio.h>
#include<stdlib.h>

/**
 * linear_search -> search for value in an array
 * @array -> input array
 * @size -> size of the array
 * @value value of the given array element
 * Return -> returns the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == Null)
	{
	return (-1);
	}	

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
