#include "main.h"
/**
 * string_nconcat - function concat 2str
 * @s1: first str
 * @s2: second str
 * @n: number of byte
 * Return: pointer else null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, len1 = 0, len2 = 0, nlen = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2  = " ";
	}
	len1 = malloc(strlen(s1) + 1);
	len2 = malloc(strlen(s2) + 1);
	if (n > len2)
	{
		n = len2;
	}
	nlen = len1 + n;
	p = malloc(nlen + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];

	p[i] = '\0';

	return (p);
}
