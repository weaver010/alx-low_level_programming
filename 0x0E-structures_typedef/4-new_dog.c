#include"dog.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	if(name==NULL||age<0||owner==NULL)
	{
		return(NULL);
	}
	s=(dog_t *)malloc(sizeof(dog_t));
	if(s==NULL)
	{
		return(NULL);
	}
	s->name=malloc(sizeof(char)*strlen(name)+1);
	if(s->name==NULL)
	{
		free(s);
		return(NULL);
	}
	s->owner=malloc(sizeof(char)*strlen(owner)+1);
	if(s->owner==NULL)
	{
		free(s->name);
		free(s);
		return(NULL);
	}
	s->name=strcpy(s->name,name);
	s->age=age;
	s->owner=strcpy(s->owner,owner);
	return(s);
}

