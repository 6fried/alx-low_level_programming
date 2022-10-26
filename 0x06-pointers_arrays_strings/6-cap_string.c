/**
 * in - check if c s in str
 *
 * @c: param
 * @str: param
 * Return: true(1) of false(0)
 */

int in(char c, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == c)
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: param
 * Return: char *
 */
char *cap_string(char *str)
{
	int i, j;
	char *delimiters = " \t\n,;.!?\"(){}";

	for (j = 0; str[j]; j++)
		;

	for (i = 0; i < j; i++)
	{
		if (in(str[i], delimiters) && 'a' <= str[i + 1] && str[i + 1] <= 'z')
		{
			str[i + 1] = 'A' - 'a' + str[i + 1]; /*cf. string_toupper*/
			i++;
		}
	}
	return (str);
}
