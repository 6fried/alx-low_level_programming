#include "main.h"

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

/**
 * string_to_nbr -func
 *
 * @str: param
 * Return: return
 */
int string_to_nbr(char *str)
{
	unsigned int nbr = 0, i;

	for (i = 0; str[i] != '-' && str[i] && '+'; i++)
	{
		nbr *= 10;
		nbr += str[i] - '0';
	}

	return (nbr);
}

/**
 * search_int -func
 *
 * @str: param
 * Return: return
 */
char *search_int(char *str)
{
	int i, j = 0;
	char *out;

	for (i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			j = 0;
			while ('0' <= str[i] && str[i] <= '9')
			{
				i++;
				j++;
			}
			break;
		}
	}

	out = malloc((j + 1) * sizeof(char));

	for (i = 0; str[i]; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			j = 0;
			while ('0' <= str[i] && str[i] <= '9')
			{
				out[j] = str[i];
				i++;
				j++;
			}
			break;
		}
	}

	return (out);
}
