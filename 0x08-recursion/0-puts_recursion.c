#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @str: input given.
 * Return: none.
 */
void _puts_recursion(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
	{
		_putchar('\n');
	}
}
