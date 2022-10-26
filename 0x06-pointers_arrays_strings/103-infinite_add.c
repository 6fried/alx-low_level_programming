/**
 * print_number -  adds two numbers.
 *
 * @n1: param
 * @2: param
 * @r: param
 * @size_r: param
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, re, n;
	int size_n1, size_n2;

	for (i = 0; n1[i]; i++)
		;
	size_n1 = i;
	for (i = 0; n2[i]; i++)
		;
	size_n2 = i;

	if (size_r < size_n1 || size_r < size_n2)
		return (0);

	r[size_r - 1] = '\0';

	k = size_r;
	re = 0;

	for (i = size_n1 - 1, j = size_n2 - 1; i >= 0, j >= 0; i--, j--, k--)
	{
		if (k < 0)
			return (0);
		n = n1[i] + n2[j] + re - '0' * 2;
		r[k] = '0' + n % 10;
		re = (n - n % 10) / 10;
	}
	return (r);
}

int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}