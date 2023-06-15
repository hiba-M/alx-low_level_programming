#include "main.h"
/**
 * malloc_checked - function that allocate memory
 * @b : memory size
 * Return: 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
