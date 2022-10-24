#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	char *tmp = s;
	int i, size;

	size = strlen(tmp);
	for (i = size - 1; i >= 0; i--)
	{
		s[size - i] = tmp[i];
	}
}
