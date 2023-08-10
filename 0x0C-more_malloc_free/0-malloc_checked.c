#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @x: size of memory
 * Return: pointer to new memory allocated
 */

void *malloc_checked(unsigned int x)
{
	char *output;

	output = malloc(x);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
