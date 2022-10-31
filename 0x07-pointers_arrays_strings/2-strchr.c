#include "main.h"

/**
 * _strchr - function
 * @s: param
 * @c: param
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}

