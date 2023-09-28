#include"main.h"
void o(unsigned long int c)
{
if (c>0)
{
   o(c/2);
  _putchar((c&1)+'0');
}

}
void print_binary(unsigned long int n)
{unsigned long int c=n;

o(c);


if(c==0)
{
    _putchar('0');
}
}
