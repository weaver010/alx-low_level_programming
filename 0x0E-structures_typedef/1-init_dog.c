#include "dog.h"
/**
 * init_dog - entry point
 * @name:the name
 * @age:the age
 * @owner:the owner
 * @d:the type
 *Return:void
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
