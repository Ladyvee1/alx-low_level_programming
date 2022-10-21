#include "main.h"
/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: gives 1
 * o otherwise
 */
int _isupper(int c)
{
	if (c >= '65' && c < '91')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
