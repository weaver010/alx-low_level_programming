#include"main.h"
/**
 * slen - get the len
 * @s:the s
 * Return:1
 *
 *
 */
int slen(char *s)
{
int i = 0;
if (s != NULL)
{
for (i = 0; s[i];)
{
i++;
}
}
return (i);
}
/**
 *create_file - create
 * @filename:the filename
 * @text_content:the text content
 * Return:1
 *
 */
int create_file(const char *filename, char *text_content)
{
int f, o;
if (filename == NULL)
{
return (-1);
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
o = write(f, text_content, slen(text_content));
if (f == -1 || o == -1)
{
return (-1);
}
close(f);
return (1);
}
