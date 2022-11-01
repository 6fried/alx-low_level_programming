#include "main.h"
#include <string.h>

/**
 * _strspn - function
 * @s: param
 * @accept: param
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if (s ==NULL || accept == NULL)
		return (len);

	for (len = 0; s[len] && strchr(accept, s[len]); len++);

	return (len);
}

