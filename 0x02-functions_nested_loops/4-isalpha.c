/**
* _isalpha - checks for alphabetical letters
* @c: a charter to be checke on
* Return: returns 0 or 1 depending on condition
*/

#include "main.h"

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
