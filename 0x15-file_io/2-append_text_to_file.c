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
 *append_text_to_file - append
 * @filename:the filename
 * @text_content:the text content
 * Return:1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, s;
if (filename == NULL)
{
return (-1);
}
f = open(filename, O_WRONLY | O_APPEND);
s = write(f, text_content, slen(text_content));
if (f == -1 || s == -1)
{
return (-1);
}
close(f);
return (1);
}
