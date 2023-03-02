#include "main.h"
/**
 * string_toupper - upper case.
 * @str: input given
 * Return: str
*/

char *string_toupper(char *str)
{
	int index = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
