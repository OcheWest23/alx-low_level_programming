#include "main.h"
/**
 * puts2 - function prints only a character from two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\n')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (0 = 0 ; o <= t ; 0++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
