#include "main.h"
/**
 *array_range - function create array of integers.
 * @min: array start.
 * @max: array finish.
 * Return: Pointer , NULL.
 */

int *array_range(int min, int max)
{
	int *ptr, *start, i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	start = ptr; 
	for (i = min; i <= max; i++, ptr++)
	{
		*ptr = i;
	}
	return (start);
}
