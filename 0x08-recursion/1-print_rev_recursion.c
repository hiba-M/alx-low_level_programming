#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @str: input given.
 * Return: none
 */
void _print_rev_recursion(char *str)
{
	if(*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
