#include <unistd.h>
#include <stdlib.h>

/**
 * print_number - prints an int
 *
 * @n: param
 */
void print_number(int n)
{
	int i, j;
	char *nbr;

	i = 0;
	if (n >= 0)
		j = n;
	else
		j = -n;

	do
	{
		i++;
	} while (j /= 10);

	nbr = malloc((i + 2) * sizeof(char));

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

	nbr[i + 1] = '\0';
	for (; i > 0; i--)
	{
		nbr[i] = '0' + j % 10;
		j -= j % 10;
		j /= 10;
	}

	for (i = 0; nbr[i]; i++)
	{
		if (nbr[i] != '+')
			write(1, &nbr[i], 1);
	}
}
