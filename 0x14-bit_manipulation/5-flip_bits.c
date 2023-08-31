#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int maxx, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (maxx = 63; maxx >= 0; maxx--)
	{
		current = exclusive >> maxx;
		if (current & 1)
			count++;
	}

	return (count);
}

