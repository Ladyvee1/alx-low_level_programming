#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * descrription _memset: over there
 *
 * Return: s
 *
 */

char *_memset(void *s, int c, size_t n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
