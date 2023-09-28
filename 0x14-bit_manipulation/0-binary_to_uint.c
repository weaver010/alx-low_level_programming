#include"main.h"
unsigned int binary_to_uint(const char *b)
{
 unsigned int sum =0,i;
 if(b==NULL)
 {
     return(0);
 }
 else
 {
for( i =0;b[i]!='\0';i++)
{
 if (b[i]==48||b[i]==49)
    {
    sum=2*sum+(b[i]-'0');

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
