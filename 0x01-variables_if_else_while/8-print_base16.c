#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	char m;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
