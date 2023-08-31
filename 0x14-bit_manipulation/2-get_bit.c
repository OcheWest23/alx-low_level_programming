#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int maxx;

	if (n == 0 && index < 64)
		return (0);

	for (maxx = 0; maxx <= 63; n >>= 1, maxx++)
	{
		if (index == maxx)
		{
			return (n & 1);
		}
	}

	return (-1);
}

