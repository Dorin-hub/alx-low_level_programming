#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char let;

	for (ten = 0; ten <= 9; ten++)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
