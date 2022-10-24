#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
	char tmp[500];
	int i, size;

	for (int i = 0; i < s[i] != '\0'; i++)
	{
		tmp[i] = s[i];
	}

	size = strlen(tmp);
	for (i = 0; i < size; i++)
	{
		s[i] = tmp[size - i - 1];
	}
}
