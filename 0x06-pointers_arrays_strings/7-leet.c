#include "main.h"
/**
 * leet - encodes a string into 1337.
 * letters a and A are replaced by 4.
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l and L are replaced by 1
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *leet(char *s)
{
	char alphaArr[] = "a44e3E3o0O0t7T7i1L1";
	int i;
	int j;

	for (i = 0; s[i] 1= '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] == alphaArr[j + 1];
				break;

			}
		}
		
	}
	return (s);
}
