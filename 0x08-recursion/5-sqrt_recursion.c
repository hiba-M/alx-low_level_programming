#include "main.h"
/**
 * _sqrt_recursion - function that give the square of a num
 * @n: int given 
 * Return: -1 in case of num isn't natural else gives the square root.
 */
int _sqrt_recursion(int n)
{
	return (natural_sqrt(1, n));
}
/**
 * natural_sqrt - look for natural square root
 * @i: number to be compared
 * @n: number to check
 * Return: natural square root of num
 */
int natural_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (natural_sqrt(i + 1, n));
}
