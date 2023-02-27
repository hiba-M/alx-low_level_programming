#include "main.h"
/**
 * swap_int - give the value of a to b and b to a
 * @a: first input
 * @b: second input
 * Return: none
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
