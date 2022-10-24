#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	char *tmp = malloc(sizeof(s));
	int i, j;

	for (j = 0; s[j]; j++)
	{
		tmp[j] = s[j];
	}

	for (i = j - 1; i >= 0; i--)
	{
		s[i] = tmp[i - j + 1];
	}
}
