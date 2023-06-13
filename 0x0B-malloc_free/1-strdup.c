#include "main.h"
/**
 * _strdup - print put the copy of str given
 * @str: pointer of str
 * Return: NULL if tehere is no str else duplicate str
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int cnt, i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		cnt = 0;
		while ( *(str + cnt) != '\0')
		{
			cnt++;
		}
		dup = malloc(cnt + 1);

		if (dup == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= cnt; i++)
			{
				dup[i] = str[i];
			}
			return (dup);
		}
	}
}
