#include "main.h"

/**
 * putshalf - description
 *
 * @str:  argument
 */
void puts_half(char *str)
{
	int i;

	for (i = (int)srlen(str) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
