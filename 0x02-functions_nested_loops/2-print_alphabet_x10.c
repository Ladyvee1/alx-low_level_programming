#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Alaways 0 (Success0
 */
void print_alphabet_x10(void)
{
	int vee, b;

	for (vee = 0; vee <= 9; vee++)
	{
		for ('b' = 97; 'b' <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
