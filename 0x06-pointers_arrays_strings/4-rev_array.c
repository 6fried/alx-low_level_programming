/**
 * reverse_array - reverses an array
 *
 * @a: param
 * @n: param
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp[n];

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = tmp[n - i - 1];
	}
}
