#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		write(0, &(str[i]), 1);
	}
	write(0, "\n", 1);
}
