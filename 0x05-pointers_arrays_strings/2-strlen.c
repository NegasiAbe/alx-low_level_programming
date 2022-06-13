#include "main.h"

/**
 * _strlen -calculates length of a string
 * @s: each character to be counted
 * Return: length of the given string
 */
int _strlen(char *s)
{
	int count = 0;

	for (s = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
