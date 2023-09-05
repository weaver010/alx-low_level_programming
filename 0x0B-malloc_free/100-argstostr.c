#include<stdio.h>
#include <stdlib.h>
		
/**
 * argstostr - concatenates all the arguments 
 * @ac:num
 * @av:array
 * Return:s
 */
		
char *argstostr(int ac, char **av)
		
{int i, n, o = 0, t = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{for (n = 0; av[i][n]; n++)
t++;
}
t += ac;
s = malloc(sizeof(char) * t + 1);
if (s == NULL)
{return (NULL);
}		
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]!='\0'; n++)
{
s[o] = av[i][n];
o++;
}
s[o++] = '\n';
}
return (s);
}
