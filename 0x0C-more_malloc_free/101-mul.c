#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * is_digit - checks if is digit
 * @s:string
 *
 * Return: 0
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (1);
i++;
}
return (0);
}
/**
 * main - multiplies two positive numbers
 * @argc:size
 * @argv: array
 * Return:0
 */
int main(int argc, char *argv[])
{char *s1, *s2;
int x, y, z, i, carr_o, d1, d2, *r, t = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || is_digit(s1) || is_digit(s2))
{printf("Error\n");
exit(98);
} x = strlen(s1);
y = strlen(s2);
z = x + y + 1;
r = malloc(sizeof(int) * z);
if (!r)
return (1);
for (i = 0; i <= x + y; i++)
r[i] = 0;
for (x = x - 1; x >= 0; x--)
{d1 = s1[x] - '0';
carr_o = 0;
for (y = strlen(s2) - 1; y >= 0; y--)
{d2 = s2[y] - '0';
carr_o += r[x + y + 1] + (d1 * d2);
r[x + y + 1] = carr_o % 10;
carr_o /= 10;
}
if (carr_o > 0)
r[x + y + 1] += carr_o;
} for (i = 0; i < z - 1; i++)
{
if (r[i])
t = 1;
if (t)
putchar(r[i] + '0');
}
if (!t)
putchar('0');
putchar('\n');
free(r);
return (0);
}
