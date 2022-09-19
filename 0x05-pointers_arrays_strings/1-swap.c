#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: value to swap
 * @b: value to swap
 */
void swap_int(int *a, int *b)
{
 	int tmp;
	tmp = *a;
	*a =  *b;
	*b = tmp;
}
