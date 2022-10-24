#include "main.h"

/**
 * puts_half - description
 *
 * @str:  argument
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	for (i = i; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
