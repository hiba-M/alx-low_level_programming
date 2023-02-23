#include "main.h"
/**
 * more_numbers - print 0 to 14 , 10 times
 * Return: none
 */
void more_numbers(void)
{
	int w, i;

	for (w = 0; w < 10; w++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
