#include "main.h"

/**
 * binary_to_uint - changes binary number unsigned int.
 * @x: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *x)
{
	int y;
	unsigned int maxx;

	maxx = 0;
	if (!x)
		return (0);
	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] != '0' && x[y] != '1')
			return (0);
	}
	for (y = 0; x[y] != '\0'; y++)
	{
		maxx <<= 1;
		if (x[y] == '1')
			maxx += 1;
	}
	return (maxx);
}

