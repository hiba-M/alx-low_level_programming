#include "main.h"
/**
 * print_sign - check whether n is greater or less than zero
 * and assign the appropriate sign '-'or'+'
 * @n: number to check
 * Return : 1 if chara greater or -1 if less than zero else 0
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
		return (1);
	}
	else
	{
		return (0);
	}
}
