#include "main.h"

/**
 * print_number - prints a number
 * @n: The number
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	if (i >= 10000)
	{
		_putchar('0' + i / 10000);
		_putchar('0' + (i / 1000) % 10);
		_putchar('0' + (i / 100) % 10);
		_putchar('0' + (i / 10) % 10);
	}
	else if (i >= 1000)
	{
		_putchar('0' + i / 1000);
		_putchar('0' + (i / 100) % 10);
		_putchar('0' + (i / 10) % 10);
	}
	else if (i >= 100)
	{
		_putchar('0' + i / 100);
		_putchar('0' + (i / 10) % 10);
	}
	else if (i >= 10)
	{
		_putchar('0' + i / 10);
	}

	_putchar('0' + i % 10);
}
