#include "main.h"

/**
 *  print_n - recursion
 * @s: param
 * @n: param
 */
void print_n(char *s, int n)
{
	if (s[n] != '\0')
	{
		write(1, &s[n], 1);
		print_n(s, n + 1);
	}
}

/**
 *  _puts_recursion - recursion
 * @s: param
 */
void _puts_recursion(char *s)
{
	print_n(s, 0);
	write (1, "\n", 1);
}

