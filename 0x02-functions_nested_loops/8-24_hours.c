#include "main.h"
/**
 * jack_bauer - print the time from 00:00 to 23:59
 * Return: non
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23 ; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10 && j < 10)
			{
				_putchar(0 + '0');
				_putchar(i + '0');
				_putchar(':');
				_putchar(0 + '0');
				_putchar(j + '0');
			}
			else if (i < 10)
			{
				_putchar(0 + '0');
				_putchar(i + '0');
				_putchar(':');
				_putchar(j + '0');
			}
			else if (j < 10)
			{
				_putchar(i + '0');
				_putchar(':');
				_putchar(0 + '0');
				_putchar(j + '0');
			}
			else
			{
				_putchar(i + '0');
				_putchar(':');
				_putchar(j + '0');
			}
		}
	}
}
