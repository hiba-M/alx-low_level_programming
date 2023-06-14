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
	int i, len;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2  = " ";
	}
	
	len = srtlen(s1) + srtlen(s2);
	
	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[i] = s2[i];
	}
	return (concat);
}
