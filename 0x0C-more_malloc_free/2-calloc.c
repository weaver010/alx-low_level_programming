#include<stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
if(nmemb==0||size==0)
{
return(NULL);
}
void *s=malloc(nmemb*size);
if(s==NULL)
{
return(NULL);
}
return(s);
}
