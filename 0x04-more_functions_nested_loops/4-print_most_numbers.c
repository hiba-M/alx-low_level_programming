#include "main.h"
/**
 * print_most_numbers - print from 0 to 9
 * but 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (int i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
