#include "main.h"
/**
 * _isalpha - check if chara is lower/upper case
 * @c: the character in ASCII code
 * Return : 1 if upper / lower else 0 (fail)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
