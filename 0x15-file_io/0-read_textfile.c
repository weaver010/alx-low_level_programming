#include"main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
char *ter;
ssize_t f;
ssize_t w;
ssize_t t;
if (filename || letters)
{
return (0);
}
f = open(filename, O_RDONLY);
if (f == -1)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
t = read(f, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(f);
return (w);
}
