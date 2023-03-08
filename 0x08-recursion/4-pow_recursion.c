#include "main.h"
/**
 * _pow_recursion - returns the power of the number.
 * @x: intiger given.
 * @y: power given.
 * Return: power of num.
 */
int  _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		res = x * _pow_recursion(x, y - 1);
		return (res);
	}
}
