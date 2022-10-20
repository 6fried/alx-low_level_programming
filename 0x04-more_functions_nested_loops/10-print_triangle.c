#include "main.h"

/**
 * print_size - prints size
 * @size: size
 */

void print_triangle(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i; j++)
				_putchar(' ');
			for (j = n - i; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
