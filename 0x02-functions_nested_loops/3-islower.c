#include "main.h"
/**
 * _islower - check if chara is lower case
 * @c: The character in ASCII code
 * Return: 1 if (succsess) else 0 (fail)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
