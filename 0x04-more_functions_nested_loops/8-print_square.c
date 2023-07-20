#include "main.h"

/**
 * print_square - function to create a square
 * @size: size of square
 * Description: use only _putchar and #to create square
 */

void print_square(int size)
{
	int m, n;

	n = 0;

	if (size < 1)
		-putchar('\n');

	while (n < size)
	{
		m = 0;
		while (m < size)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
