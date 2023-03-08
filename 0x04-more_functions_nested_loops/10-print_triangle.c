#include "main.h"
/**
 * print_triangle - print a triangle using #.
 * @size: the size giving.
 * Return: none.
*/
void print_triangle(int size)
{
	int i, j, k, space;

	if (size == 0)
	{
		_putchar("\n");
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			space = size - i;
			for (j = 1; j <= space; j++)
			{
				_putchar(" ");
			}
			for (k = 1; k <= i; k++)
			{
				_putchar("#");
			}
			_putchar("\n");
		}
	}
}
