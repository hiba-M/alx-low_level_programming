#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of array.
 * @a: array given.
 * @n: input given.
 * Return: none.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
