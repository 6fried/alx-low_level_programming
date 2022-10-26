/**
 * leet - capitalizes all words of a string.
 *
 * @str: param
 * Return: char *
 */

char *leet(char *str)
{
	int i, j;
	char *foo = "aAeEoOtTlT";
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

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}