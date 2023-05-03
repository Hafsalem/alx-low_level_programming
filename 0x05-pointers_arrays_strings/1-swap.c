#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped.
 *
 * return: nothing
 */
void swap-int(int *a, int *b)
/* the function that swaps the values of two integeres. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
