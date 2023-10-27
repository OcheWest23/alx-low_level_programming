#include "main.h"

/**
 * binary_to_uint - This function changes a binary number to an unsigned int.
 * @b: The pointer to the string carrying a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int max;

	max = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		max <<= 1;
		if (b[a] == '1')
			max += 1;
	}
	return (max);
}

