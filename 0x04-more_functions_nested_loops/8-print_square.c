#include "main.h"

/**
 * print_square - function to create a square
 * @size: size of square
 * Description: use only _putchar and #to create square
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		-putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
