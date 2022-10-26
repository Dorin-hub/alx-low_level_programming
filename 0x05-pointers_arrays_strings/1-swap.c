#include "main.h"
/**
 * swap_int - this functoin change the initial.
 * @a: this is the first parameter
 * @b: this is the another parameter
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
