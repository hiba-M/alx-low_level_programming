#include "main.h"

/**
 * _strcat-concanate string.
 * @dest:character
 * @src:character
 * Return:nothing
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0'; ++i, len++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
