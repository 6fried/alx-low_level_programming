#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	char *tmp = malloc(sizeof(s));
	int i, size;

	for (i = 0; s[i] != '\0'; i++)
	{
		tmp[i] = s[i];
	}

	for (size = 0; tmp[size]; size++)
		;
	for (i = 0; i != size; i++)
	{
		s[i] = tmp[size - i - 1];
	}
}
