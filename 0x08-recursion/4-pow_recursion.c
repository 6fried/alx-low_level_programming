/**
 * _pow_recursion - recursion
 * @x: param
 * @y: param
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
