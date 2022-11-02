/**
 * is_prime - function
 * @n: input
 * @c: iterator
 * Return: true of false
 */
int is_prime(int n, int c)
{
	if (c <= n / 2)
	{
		if (n % c == 0)
			return (1);
		else
			return (is_prime(n, c + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - function
 * @n: input
 * Return: true or false
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (1);

	return (is_prime(n, 0));
}
