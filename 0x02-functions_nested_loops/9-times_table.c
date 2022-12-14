#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; jasper++)
	{
		for (j = 0; j <= 9; jasper++)
		{
			int prod = j * i;

			if (j == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
		}
	}
	_putchar('\n');
	}
}
