#include<stdio.h>
#include"dog.h"
/**
 * print_dog - print dog
 * @d:the d
 * Return:void
 *
 *
 *
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->age < 0)
{
printf("age: (nil)\n");
}
else
{
printf("age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("owner: (nil)");
}
else
{
printf("owner: %s", d->owner);
}
}
}
