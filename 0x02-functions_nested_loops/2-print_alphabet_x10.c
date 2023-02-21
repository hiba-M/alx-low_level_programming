#include "main.h"
/**
 * print_alphabet_x10 - from a to z 10times
 * Return: 1
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 48; j <= 57; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
