#include "main.h"
/**
 * puts - recursion
 * @s: pram
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		int i;

		write(1, &s[0], 1);

		for (i = 0; s[i]; i++)
			s[i] = s[i+1];
		_puts_recursion(s);
	}
}
