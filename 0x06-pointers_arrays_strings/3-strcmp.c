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

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (i > j)
		return (15);
	else if (i == j)
	{
		for (i = 0; s1[i]; i++)
		{
			if (s1[i] < s2[i])
			{
				return (-15);
			}
			else if (s1[i] > s2[i])
			{
				return (-15);
			}
		}
		return (0);
	}
	return (-15);
}
