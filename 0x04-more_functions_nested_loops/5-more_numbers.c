#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9,
 (* followed by a new line.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 10)
			_putchar(i / 10);
		_putchar(i % 10);
	}
	_putchar('\n');
}
