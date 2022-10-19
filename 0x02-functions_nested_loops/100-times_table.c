#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number
 */

void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j >= 10)
				{
					if (j != 0)
					{
						_putchar(' ');
					}
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}

				_print(i * j);

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * _print - prints a number
 * @n: The number
 */
void _print(int n)
{
	if (n >= 100)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
	}
	else if (n >= 10)
	{
		_putchar('0' + n / 10);
	}
	_putchar('0' + n % 10);
}
