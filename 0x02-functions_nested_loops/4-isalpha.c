#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: The character to compare
 *
 * Return: 1 for letters. 0 for the rest.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
