#include "dog.h"

/**
 * _strlen - calculates the length of a string.
 * @str: the string whose length is to be calculated.
 *
 * Return: the length of the string.
 */

size_t _strlen(char *str)
{
size_t len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: a pointer to the new dog, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
size_t name_len, owner_len;
size_t i;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
if (name == NULL || owner == NULL)
{
free(dog);
return (NULL);
}
name_len = _strlen(name) + 1;
owner_len = _strlen(owner) + 1;
dog->name = malloc(name_len);
dog->owner = malloc(owner_len);
if (dog->name == NULL || dog->owner == NULL)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}
for (i = 0; i < name_len; i++)
{
dog->name[i] = name[i];
}
for (i = 0; i < owner_len; i++)
{
dog->owner[i] = owner[i];
}
dog->age = age;
return (dog);
}
