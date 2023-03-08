#include "main.h"

int checker(int n, int i);

/**
 * is_prime_number - see if number prime or not.
 * @n: int given.
 * Return: 1 if num is prime otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * checker - checks for prime
 * @n: input to check
 * @i: n / 2
 * Return: prime check
 */
int checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (checker(n, i - 1));
}
