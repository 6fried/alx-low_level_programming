#include "main.h"

/**
 * _strchr - function
 * @s: param
 * @c: param
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i, j;

	for (j = 0; s[j]; j++);

	for (i = 0; i < j; i++)
	{
		if(s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
