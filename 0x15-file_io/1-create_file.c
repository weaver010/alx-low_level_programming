#include"main.h"
int slen(char *s)
{
int i=0;
if (s != NULL)
{
for (i = 0; s[i];)
{
i++;
}
}
return(i);
}
int create_file(const char *filename, char *text_content)
{
int f, o;
if (filename == NULL )
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
