#include "main.h"

/**
 * puts_half - description
 *
 * @str:  argument
 */
void puts_half(char *str)
{
	int i, j, n;

	for (j = 0; str[j]; j++)
		;

	n = j / 2;
	if (j % 2 == 0)
		n++;

	for (i = n; str[i]; i++)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}
