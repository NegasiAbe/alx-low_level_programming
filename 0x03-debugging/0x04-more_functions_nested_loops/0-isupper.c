/**
 * _isupper -checks presence of the upper letter
 * @c:character argument
 *  Return: 1 if Uppere case 0 otherwise
 */

#include "main.h"

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
