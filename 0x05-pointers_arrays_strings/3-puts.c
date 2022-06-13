#include "main.h"

/**
 * _puts -prints the string characte
 * @str: charcter to be printed
 * Return: no value
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
