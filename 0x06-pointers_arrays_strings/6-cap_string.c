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

	if (('a' <= str[0] && str[0] <= 'z'))
	{
		str[0] = 'A' - 'a' + str[0]; /*cf. string_toupper*/
	}

	for (i = 1; i < j; i++)
	{
		if (in(str[i], delimiters) && ('a' <= str[i + 1] && str[i + 1] <= 'z'))
		{
			i++;
			str[i] = 'A' - 'a' + str[i]; /*cf. string_toupper*/
		}
	}
	return (str);
}
