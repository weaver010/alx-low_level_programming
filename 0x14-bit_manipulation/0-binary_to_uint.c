#include"main.h"
unsigned int binary_to_uint(const char *b)
{
char *c=malloc(sizeof(char)*strlen(b));
 unsigned int sum =0,i;
 strcpy(c,b);
 if(b==NULL)
 {
     return(0);
 }
 else
 {
for( i =0;c[i]!='\0';i++)
{
 if (c[i]==48||c[i]==49)
    {
    sum+=((c[strlen(c)-1-i]-48)*pow(2,i));

    }
    else
    {
        return(0);
        break;
    }

}
}
         return(sum);
}
