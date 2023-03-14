#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *array;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	array = (char *)malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		array[j] = str[j];

	return (array);
}
