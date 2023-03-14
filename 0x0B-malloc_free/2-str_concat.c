#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int end1, end2, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (end1 = 0; s1[end1] != '\0'; end1++)
		;

	for (end2 = 0; s2[end2] != '\0'; end2++)
		;

	array = malloc(sizeof(char) * (end1 + end2 + 1));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (k = 0; k < end1; k++)
		array[k] = s1[k];

	limit = end2;
	for (end2 = 0; end2 <= limit; k++, end2++)
		array[k] = s2[end2];

	return (array);
}
