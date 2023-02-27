#include "main.h"
/**
 * _strlen - the lenght of string
 * @s: input given
 * Return: none
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s < '\0')
	{
		*s++;
		len++;
	}
	return (len);
}
