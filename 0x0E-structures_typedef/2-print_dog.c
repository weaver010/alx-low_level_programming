#include<stdio.h>
#include"dog.h"
/**
 *
 *
 *
 *
 *
 *
 */
void print_dog(struct dog *d)
{
if(d==NULL)
{
return;
}
if(d!=NULL)
{
if(d->name==NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n",d->name);
}
if (d->age<0)
{
printf("age: (nil)\n");
}
else
{
printf("age: %f\n",d->age);
}
if(d->owner==NULL)
{
printf("owner: (nil)\n");
}
else
{
printf("owner: %s",d->owner);
}
}
}
