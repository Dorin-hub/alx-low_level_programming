#include "main.h"

/**
 * _strlen - returns the len of a string
 * @s: argument to the function
 * Description: return the required results
 * Return: return integer value
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
