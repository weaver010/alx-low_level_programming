#include"main.h"
int create_file(const char *filename, char *text_content)
{
int f, o;
if (filename == NULL )
{
return (-1);
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
o = write(f, text_content, strlen(text_content));
if (f == -1 || o == -1)
{
return (-1);
}
close(f);
return (1);
}
