/**
 * rot13 - encodes a string using rot13.
 *
 * @str: param
 * Return: char *
 */

char *rot13(char *str)
{
	int i, j;
	char *foo = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *bar = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
