#include "main.h"
/**
 * factorial - function that returns
 * the factorial of the number.
 * @n: intiger given.
 * Return: result of the factorial.
*/
int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		res = n * factorial(n - 1);
		return (res);
	}
}
