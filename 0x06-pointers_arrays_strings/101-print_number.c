#include <unistd.h>
#include "main.h"

/**
 * print_number - prints an int
 *
 * @n: param
 */
void print_number(int n)
{
	int i, j;
	char nbr[100];

	i = 0;
	if (n >= 0)
	{
		j = n;
		nbr[0] = '+';
	}
	else
	{
		j = -n;
		nbr[0] = '-';
	}

	do
	{
		i++;
	} while (j /= 10);

	nbr[i + 1] = '\0';
	for (i = i; i > 0; i--)
	{
		nbr[i] = '0' + j % 10;
		j = j - j % 10;
		j = j / 10;
	}

	for (i = 0; nbr[i]; i++)
	{
		if (nbr[i] != '+')
			_putchar(nbr[i]);
	}
}
