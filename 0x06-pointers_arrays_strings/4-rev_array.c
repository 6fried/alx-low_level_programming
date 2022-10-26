#include <stdio.h>
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

int main()
{
	int p = 9;
	int b = 5;
	int *ptr = &p;

	// printf("%d\n", *ptr);

	ptr = &b;
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

	int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	char str[13] = "I am a string";

	printf("%d\n", n);
	printf("%d\n", &n[0]);
}