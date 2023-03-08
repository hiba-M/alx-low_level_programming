#include "main.h"
/**
 * _strlen_recursion - print lenght of string using recursion
 * @s: string given.
 * Return: lenght of string.
*/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
