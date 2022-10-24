#include "main.h"
/**
 * print_rev- prints a string in reverse
 *
 * @s: the string
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		write(0, s[i], 1);
	}
	write(0, '\n', 1);
}
