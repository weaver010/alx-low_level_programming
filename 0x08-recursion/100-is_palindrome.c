#include "main.h"
/**
 * istrlen- returns the len
 * @s:string
 * Return:len
 */
int istrlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + istrlen(s + 1));
}
/**
 * i_pal - checks palindrome
 * @s:string
 * @i:num
 * @l:len
 * Return:1
 */
int i_pal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
return (0);
if (i >= l)
return (1);
return (i_pal(s, i + 1, l - 1));
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome
 * @s:string
 * Return:1
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (i_pal(s, 0, istrlen(s)));
}
