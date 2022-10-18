#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 (* followed by a new line.
 * @n: the beginning
 */

void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i > 99; i--)
		{
			if (i >= 100)
			{
				_putchar('0' + i / 100);
				_putchar('0' + (i - i % 10) / 10);
			}
			else
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
