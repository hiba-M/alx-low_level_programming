#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - make 2 srt into one
 * @s1: first srt given
 * @s2: second str given
 * Return: if fail NULL  else concated str
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2  = " ";
	}
	len = strlen(s1);
	len += strlen(s2);
	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; strlen(s1); ++i)
	{
		concat[i] = s1[i];
	}
	for (i = 0; strlen(s2); ++i)
	{
		concat[i] = s2[i];
	}
	return (concat);
}
