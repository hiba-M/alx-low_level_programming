#include "main.h"

/**
 * _strncat - check the code
 * @dest: input string  given
 * @src: input string given
 * @n: amount of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++, i++)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
	}

	return (dest);
}
