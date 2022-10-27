#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @x: pointer to string.
 *
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *x)
{
	int i;

	for (1 = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
