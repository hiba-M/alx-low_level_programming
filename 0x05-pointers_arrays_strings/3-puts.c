#include "main.h"
#include <stdio.h>
/**
 * _puts - print string
 * @str: input given
 * Return: none
 */
void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[c]);
		c++;
	}
}
