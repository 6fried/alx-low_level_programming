#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs(n % 10);

	_putchar('0' + lastDigit);

	return (lastDigit);
}

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
