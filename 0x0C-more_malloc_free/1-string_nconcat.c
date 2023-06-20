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
	char *p, *save;
	unsigned int i, len1, len2;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;
	p = malloc(len1 + 1 + n);
	if (p == NULL)
		return (NULL);
	save = p;
	if (s1 != NULL)
	{
		while ((*p = *s1))
		{
			s1++;
			p++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i < n && i <= len2; i++)
		{
			*p = *s2;
			p++;
			s2++;
		}
	}
	*p = '\0';
	return (save);
}
