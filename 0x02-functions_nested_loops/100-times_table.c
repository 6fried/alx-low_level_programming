#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j >= 100)
			{
				_putchar('0' + (i * j) / 100);
				_putchar('0' + ((i * j) / 10) % 10);
			}
			else if (i * j >= 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}

				_putchar('0' + i / 10);
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('0' + (i * j) % 10);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
