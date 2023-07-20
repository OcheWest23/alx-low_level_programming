#include "main.h"

/**
 * print_line - function create a straight line in terminal
 * @n: number of times the character_prints
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
