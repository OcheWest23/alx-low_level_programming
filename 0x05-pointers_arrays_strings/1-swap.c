#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @x: integer to swap
 * @y: integer to swap
 */
void swap_int(int *x, int *y)
{
	int k;

	k = *x;
	*x = *y;
	*y = k;
}
