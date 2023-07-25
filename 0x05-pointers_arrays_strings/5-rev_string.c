#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		char m;

		m = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = m;
	}
}
