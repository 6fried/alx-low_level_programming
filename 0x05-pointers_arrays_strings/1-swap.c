/**
 * swap_int - swaps a and b
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	*a = *b;
	*b = *a;
}
