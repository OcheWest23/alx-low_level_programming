#include "main.h"
/**
 * helperfunction - returns 0 or 1.
 * @num: number being cracked.
 * @i: possible factor of the number.
 *
 * Return: 0 if not prime.  1 if prime.
 */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime or not.
 * @n: number to be checked.
 *
 * Return: 1 if number is prime.
 * 0 if number is not prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}
