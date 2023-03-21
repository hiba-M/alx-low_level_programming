#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog represantation data structure
 * @name: doggy name
 * @age: doggy age
 * @owner: doggy owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct god_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
