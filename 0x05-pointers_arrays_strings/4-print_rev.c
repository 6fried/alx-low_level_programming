#include "main.h"
/**
 * print_rev- prints a string in reverse
 *
 * @s: the string
 */
void print_rev(char *s)
{
	int i, j;

	for (j = 0; s[j]; j++)
		;

	for (i = j - 1; i >= 0; i--)
	{
		write(1, &s[i], 1);
	}
	write(0, '\n', 1);
}
