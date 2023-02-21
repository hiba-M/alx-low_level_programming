#include "main.h"
/**
 * print_sign-check if character is greater than zero or zero or less than zero
 * @n:checker
 * Return:1-if greater than zero,0-if zero,1-if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
