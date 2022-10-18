#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 (* followed by a new line.
 * @n: the beginning
 */

void print_to_98(int n)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		if (i >= 10)
		{
			_putchar(i / 10);
		}
		_putchar(i % 10);
		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}