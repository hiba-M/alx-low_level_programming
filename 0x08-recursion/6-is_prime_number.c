#include "main.h"
/**
 * is_prime_number - function that give prime numbers
 * @n: integer given 
 * Return: 1 if num is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 1)
		return (1);
	else
		return (0);
}
