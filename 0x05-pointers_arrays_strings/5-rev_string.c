#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	char *tmp;
	int i, size;

	strcpy(s, tmp);
	size = strlen(tmp);
	for (i = 0; i < size; i++)
	{
		s[i] = tmp[size - i - 1];
	}
}
