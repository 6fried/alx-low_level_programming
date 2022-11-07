/**
 * _strdup - func
 * @str: param
 * Return: char*
 */
char *_strdup(char *str)
{
	int i;
	char *out = malloc(sizeof(str));

	for (i = 0; i < sizeof(str); i++)
	{
		out[i] = str[i];
	}
	return out;
}
