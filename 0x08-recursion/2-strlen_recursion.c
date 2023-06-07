#include "main.h"
/**
 * _strlen_recursion - the length of the string
 * @s: input given
 * Return :  lenth of s
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = 1 + _strlen_recursion(s + 1); 
	}
	return n;
}
