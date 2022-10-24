#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char *out = malloc(sizeof(char));

	for (i = 0; s[i]; i++)
		;
	for (; s[i - 1]; i--, j++)
		out[j] = s[i - 1];

	for (i = 0; s[i]; i++)
		s[i] = out[i];
}
