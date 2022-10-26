/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: param
 * Return: char *
 */
char *string_toupper(char *str)
{
	int i, j;

	for (j = 0; str[j]; j++)
		;

	for (i = 0; i < j; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			int indexInAlphabet = str[i] - 'a';

			str[i] = 'A' + indexInAlphabet;
		}
	}

	return (str);
}
