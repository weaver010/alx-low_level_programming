#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
unsigned int i, a;
size_t s, su;
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char p[7] = "      ";
if (argc != 2)
{
printf("Correct usage: ./keygen5 username\n");
return (1);
}
s = strlen(argv[1]);
p[0] = l[(s ^ 59) & 63];
for (i = 0, su = 0; i < s; i++)
{
su += argv[1][i];
}
p[1] = l[(su ^ 79) & 63];
for (i = 0, a = 1; i < s; i++)
{
a *= argv[1][i];
}
p[2] = l[(a ^ 85) & 63];
for (a = argv[1][0], i = 0; i < s; i++)
{
if ((char)a <= argv[1][i])
{
a = argv[1][i];
}
}
srand(a ^ 14);
p[3] = l[rand() & 63];
for (a = 0, i = 0; i < s; i++)
{
a += argv[1][i] * argv[1][i];
}
p[4] = l[(a ^ 239) & 63];
for (a = 0, i = 0; (char)i < argv[1][0]; i++)
{
a = rand(); }
p[5] = l[(a ^ 229) & 63];
printf("%s\n", p);
return (0); }
