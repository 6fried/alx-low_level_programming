#include "main.h"

/**
 * puts2 - description
 *
 * @str:  argument
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
		}
	}
	write(1, "\n", 1);
}
