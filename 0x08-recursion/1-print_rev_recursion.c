#include "main.h"

/**
 *  print_n - recursion
 * @s: param
 * @n: param
 */
void print_n(char *s, int n)
{
	if (n >= 0)
	{
		write(1, &s[n], 1);
		print_n(s, n - 1);
	}
}
/**
 * size - recursion
 * @s: param
 * @n: param
 * Return: int
 */
int size(char *s, int n)
{
	if (s[n] == '\0')
		return n - 1;
	return size(s, n + 1);
}

/**
 *  _print_rev_recursion - recursion
 * @s: param
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = size(s, 0);
	print_n(s, i);
}

