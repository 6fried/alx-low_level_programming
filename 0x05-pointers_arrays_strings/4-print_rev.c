#include "main.h"
/**
 * print_rev- prints a string in reverse
 *
 * @s: the string
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}