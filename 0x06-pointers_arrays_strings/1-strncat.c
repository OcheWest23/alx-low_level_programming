#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: Destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[y] = src[z];
	y++;
	z++;
	}
	dest[y] = '\0';
	return (dest);
}
