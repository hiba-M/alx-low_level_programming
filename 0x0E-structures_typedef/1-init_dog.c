#include <stdio.h>
#include "dog.h"

/**
* init_dog -  initialize a variable
*type struct dog
*@d: dog identification
*@name: doggy name
*@age: doggy age
*@owner: doggy owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
