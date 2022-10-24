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
		print(&str[i]);
	}
	print("\n");
}
