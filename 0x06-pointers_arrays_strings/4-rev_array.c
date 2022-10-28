#include "main.h"

/**
 * reverse_array - reverses an array.
 * @a: pointer to array.
 * @n: number of element of a array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int tmp, counter;

	n = n -1;
	counter = 0;
	while (counter <= n)
	{
		tmp = a[counter];
		a[counter++] = a[n];
		a[n--] = tmp;
	}
}
