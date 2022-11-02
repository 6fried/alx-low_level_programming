#include "main.h"

/**
 * size - recursion
 * @s: param
 * @n: param
 * Return: int
 */
int size(char *s, int n)
{
	if (s[n] == '\0')
		return (n);
	return (size(s, n + 1));
}

/**
 *  _strlen_recursion - recursion
 * @s: param
 */
int _strlen_recursion(char *s)
{
	return (size(s, 0));
}
