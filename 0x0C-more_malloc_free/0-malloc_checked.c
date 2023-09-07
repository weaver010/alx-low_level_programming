#include<stdio.h>
#include<stdlib.h>
void *malloc_checked(unsigned int b)
{
void *s =malloc(b);
if(s==NULL)
{
return(98);
}
return(s);
}
