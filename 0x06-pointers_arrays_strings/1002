#include "main.h"
/**
 *rev - rev
 *@str:the string
 *Return:void
 *
 */
void rev(char *str)
{
int a = 0;
int j = 0;
char t;
while (*(str + a) != '\0')
{
a++;
}
a--;
for (j = 0; j < a; j++, a--)
{
t = *(str + j);
*(str + j) = *(str + a);
*(str + a) = t;
}
}
/**
 * *infinite_add - adds two numbers
 *@n1:first
 *@n2:second
 *@r:result
 *@size_r:size
 *Return:r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, i = 0, j = 0, g = 0;
int h1 = 0, h2 = 0, total = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || carry == 1)
{
if (i < 0)
h1 = 0;
else
h1 = *(n1 + i)-'0';
if (j < 0)
h2 = 0;
else
h2 = *(n2 + j)-'0';
total = h1 + h2 + carry;
if (total >= 10)
carry = 1;
else
carry = 0;
if (g >= (size_r - 1))
return (0);
*(r + g) = (total % 10) + '0';
g++;
j--;
i--;
}
if (g == size_r)
return (0);
*(r + g) = '\0';
rev(r);
return (r);
}
