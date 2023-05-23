#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type: struct dog with the following properties
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
