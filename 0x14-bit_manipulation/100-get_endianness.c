#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int maxx;
	char *c;

	maxx = 1;
	c = (char *) &maxx;

	return ((int)*c);
}

