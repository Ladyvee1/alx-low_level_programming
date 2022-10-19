#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: input number as an integer.
 *
 * Return: Always 0 if true
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
