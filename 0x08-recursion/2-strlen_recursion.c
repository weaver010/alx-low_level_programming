#include"main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s:the string
 * Return:len
 *
 *
 *
 */
int _strlen_recursion(char *s)
{int i = 0;
if (s[i] != '\0')
{i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
