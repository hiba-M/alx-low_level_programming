#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an arrayn using malloc.
 * @nmemb: Number of elements
 * @size: Of each element.
 * Return: Pointer else NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
