#include <stdio.h>

/**
 * main - Entry point
 * author: ladyvee1
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ladyvee1;
	char john;

	for (ladyvee1 = 48; ladyvee1 < 58; ladyvee1++)
		putchar(ladyvee1);
	for (john = 'a'; john <= 'l'; john++)
		putchar(john);
	putchar('\n');
	return (0);
}
