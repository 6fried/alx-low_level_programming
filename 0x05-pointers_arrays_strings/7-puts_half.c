#include "main.h"

/**
 * puts_half - description
 *
 * @str:  argument
 */
void puts_half(char *str)
{
	int i, first;

	if (strlen(str) % 2 == 0)
		first = strlen(str) / 2;
	else
		first = strlen(str) / 2 - 1;

	for (i = first; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
