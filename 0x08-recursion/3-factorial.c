#include "main.h"
/**
 * factorial - function that returns the factorial of n.
 * @n: intiger given.
 * Return: result of the function.
*/
int factorial(int n)
{
	int fact;

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
		fact = n * factorial(n - 1);
		return (fact);
	}
}
