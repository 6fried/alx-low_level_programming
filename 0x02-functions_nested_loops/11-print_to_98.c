#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 (* followed by a new line.
 * @n: the beginning
 */

void print_to_98(int n)
{
	int i, n_abs;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i < 0)
			{
				n_abs = -i;
				_putchar('-');
			}
			else
			{
				n_abs = i;
			}
			print(n_abs);
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			print(i);
		}
	}
	_putchar('\n');
}

/**
 * print - prints a number
 * @i: The number
 */


void print(int i)
{
	if (i >= 100)
	{
		_putchar('0' + i / 100);
		_putchar('0' + (i / 10) % 10);
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
