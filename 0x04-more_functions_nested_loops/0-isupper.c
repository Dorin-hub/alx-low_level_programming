#include "main.h"

/**
 * _isupper - a function that checks for uppercase letter
 * @c: input
 * Return: 1 if c is uppercase and 0 if not the case
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
