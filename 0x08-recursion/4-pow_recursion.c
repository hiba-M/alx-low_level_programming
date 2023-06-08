#include "main.h"
/**
 * _pow_recursion - fuction that raise the number to a power given
 * @x: number given.
 * @y: power given.
 * Return: if power is lower than 0 gives -1 else pow of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x + _pow_recursion(x , y - 1);
	}
}
