#include "main.h"
/**
 * _print_rev_recursion - print reversed string using recursion
 * @s: string given.
 * Return: none.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
