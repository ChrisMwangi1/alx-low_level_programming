#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - file name
 * @name: name of dog
 * @age: age value
 * @owner: owner of dog
 * Desc: Defines a type struct dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
