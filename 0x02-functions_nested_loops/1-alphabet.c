#include "main.h"
/**
 * print_alphabet - print the alphabets [a-z]
 * Return: 1
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

