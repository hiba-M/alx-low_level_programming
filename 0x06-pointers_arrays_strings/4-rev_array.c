#include "main.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: array
 * @n: num of elemnt
 * Return:  0 if (Success)
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		n--;
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
