/**
 * _strcmp - compares two strings
 *
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0; j == 0; i++)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			break;
		}
		j = s1[i] - s2[i];
	}
	return (j);
}
