#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input given
 * @s2: input given
 * Return: 0 if (Success)
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
