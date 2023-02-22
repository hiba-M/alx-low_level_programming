#include "main.h"
/**
 * times_table - table of numbers from 0 to 9
 * Return: none
 */
void times_table(void)
{
	int x, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
