#include<stdio.h>
#include<stdlib.h>
void *malloc_checked(unsigned int b)
{
void *s=malloc(b);
if(s==NULL)
{exit(98);
}
return(malloc(b));
}
