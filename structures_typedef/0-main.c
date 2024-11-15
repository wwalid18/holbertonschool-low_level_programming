#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "viki";
    my_dog.age = 1.9;
    my_dog.owner = "ameni";
    printf("My name is %s, and I am %.1f years old :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
