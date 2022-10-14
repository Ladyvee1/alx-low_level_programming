#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ladyvee1;

	for (ladyvee1 = 48; ladyvee1 < 58; ladyvee1++)
	{
		putchar(ladyvee1);
		if (ladyvee1 !=57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
