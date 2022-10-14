#include <stdio.h>

/**
 * main - Entry point
 * author: ladyvee1
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ladyvee1;

	for (ladyvee1 = 'z'; ladyvee1 >= 'a'; ladyvee1--)
		putchar(ladyvee1);
	putchar('\n');
	return (0);
}
