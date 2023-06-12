#include "main.h"
/**
 * create_array - print out array of of size given init by c
 * @size: the array size 
 * @c: initialize chara
 * Return: NULL if size is 0 else pointer of array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(c) * size);

	if (p == NULL)
	{
		return(0);
	}
	else
	{
		for (i = 0; i< size ;i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
