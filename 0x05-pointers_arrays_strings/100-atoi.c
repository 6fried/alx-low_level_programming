#include "main.h"
#include <stdio.h>
/**
 * _atoi -func
 *
 * @s: param
 * Return: return
 */
int _atoi(char *s)
{
	char *snbr = search_int(s);

	if (snbr != NULL)
	{
		int i;
		unsigned int nbr = string_to_nbr(snbr);

		for (i = 0; s[i]; i++)
		{
			if (s[i] == '-')
				nbr *= -1;
			else if ('0' <= s[i] && s[i] <= '9')
				break;
		}
		return (nbr);
	}
	else
		return (0);
}
