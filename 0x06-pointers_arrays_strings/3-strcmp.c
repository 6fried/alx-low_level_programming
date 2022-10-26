/**
 * _strcmp - compares two strings
 *
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, min;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (i > j)
	{
		min = j;
	}
	else
	{
		min - i;
	}

	for (k = 0; k < min; k++)
	{
		if (s1[k] < s2[k])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
	}
	if (i > j)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
	return (0);
}
