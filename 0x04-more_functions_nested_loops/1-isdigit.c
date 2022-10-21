#include "main.h"

/**
 * _isdigit - determine if digit
 *
 * @c: character to determine
 *
 * Return: gives boolean
 */

int _isdigit(int c)
{
	if (c >= '48' && c < '58')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
