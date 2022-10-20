#include "main.h"

/**
 * print_triangle - prints tiangle
 * @size: size
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (j = size - i; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
