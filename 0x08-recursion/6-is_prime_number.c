#include "main.h"
/**
 * helper - does it for me
 * @i: helper int
 * @n: integer i'm testing
 * Return: value
 */
int helper(int 1, int n)
{
	if (n % 1 == 0 && n != 1)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
