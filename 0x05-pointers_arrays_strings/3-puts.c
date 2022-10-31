#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the string
 */
void _puts(char *str)
{
	int i, j;

	for (j = 0; str[j]; j++)
		;

	for (i = 0; i < j; i++)
	{
		write(1, &str[i], 1);
	}
	print("\n");
}
