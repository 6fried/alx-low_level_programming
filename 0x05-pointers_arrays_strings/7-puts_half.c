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

	if (i % 2 == 0)
		i = (i - 1) / 2;
	else
		i = i / 2;
	for (i = i; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
