#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name to initialize.
 * @age: The age to initialize.
 * @owner: The owner to initialize.
 *
 * Description: This function assigns the provided values (name, age, owner)
 * to the corresponding fields of the struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
