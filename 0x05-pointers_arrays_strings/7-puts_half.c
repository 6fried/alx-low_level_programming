#include "main.h"

/**
 * putshalf - description
 *
 * @str:  argument
 */
void puts_half(char *str)
{
	int i, first;

	first = strlen(str) / 2;
	if (first > strlen(str) / 2)
		first--;

	for (i = first; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
