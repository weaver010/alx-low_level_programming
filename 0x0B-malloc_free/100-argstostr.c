#include<stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac:num
 * @av:array
 * Return:s
 */
char *argstostr(int ac, char **av)
{int i, j, o = 0, t = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{for (j = 0; av[i][j]; j++)
t++;
}
t += ac;
s = malloc(sizeof(char) * t + 1);
if (s == NULL)
{return (NULL);
}		
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[o] = av[i][j];
o++;
}
s[o++] = '\n';
}
return (s);
}
