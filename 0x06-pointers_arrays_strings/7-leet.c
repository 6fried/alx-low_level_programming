/**
 * leet - capitalizes all words of a string.
 *
 * @str: param
 * Return: char *
 */

char *leet(char *str)
{
	int i, j;
	char *foo = "aAeEoOtTlL";
	char *bar = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; foo[j]; j++)
		{
			if (str[i] == foo[j])
			{
				str[i] = bar[j];
			}
		}
	}

	return (str);
}
