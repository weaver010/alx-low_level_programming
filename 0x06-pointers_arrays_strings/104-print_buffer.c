#include <stdio.h>
#include"main.h"
/**
 * isprinta - that prints a buffer.
 * @n:char
 * Return:1
 */
int isprinta(int n)
{
return (n >= 32 && n <= 126);
}
/**
 * printb - that prints a buffer.
 * @b:buff
 * @i:i
 * @j:j
 * Return:void
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
void printb(char *b, int i, int j)
{
int o = 0;
while (o < 10)
{
if (o < j)
{
printf("%02x", *(b + i + o));
}
else
{
printf("  ");

}
if (o % 2)
{
printf("  ");
}
o++;
}
}
/**
 * printa - that prints a buffer.
 * @b:buff
 * @i:i
 * @j:j
 * Return:void
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
void printa(char *b, int i, int j)
{
int ch, h = 0;
while (h < j)
{
ch = *(b + h + i);
if (isprinta(ch))
{
ch=46;
}
else
{
printf("%c", ch);
}
h++;
}
}
/**
 * print_buffer - that prints a buffer.
 * @b:buff
 * @size:size
 * Return:void
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
void print_buffer(char *b, int size)
{
if (size > 0)
{
int i, j;
for (i = 0; i < size; i += 10)
{
j = (size - i < 10) ? size - i : 10;
printf("%08x:", i);
printb(b, i, j);
printa(b, i, j);
printf("\n");
}
}
else
{
printf("\n");
}
}
