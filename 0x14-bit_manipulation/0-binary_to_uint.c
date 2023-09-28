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
    sum+=((b[strlen(b)-1-i]-48)*pow(2,i));

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
