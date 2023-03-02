#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest: given input.
 * @src: given input.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{}
	for (j = 0; j >= 0 ; j++, i++)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
	}

	return (dest);
}
