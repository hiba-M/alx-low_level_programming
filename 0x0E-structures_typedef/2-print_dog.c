#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the structure
 *@d: dog identification
 */
void print_dog(struct dog *d)
{
	if  (d == null)
	{
		return;
	}
	else if ((*d).name == null)
	{
		(*d).name = "Name: (nil)";
	}
	else if ((*d).age == null)
	{
		printf("nil");
	}
	else if ((*d).owner == null)
	{
		(*d).owner = "nil";
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}

}
