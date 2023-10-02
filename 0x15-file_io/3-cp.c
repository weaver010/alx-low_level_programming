#include"main.h"
int main(int argc, char *argv[])
{
int sour, dest, s, o,c,b;
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
exit(99);
}
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
sour = open(argv[1], O_RDONLY);
s = read(sour, buf, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (sour == -1 || s == -1)
{
dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
o = write(dest, buf, s);
if (dest == -1 || o == -1)
{
dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
s = read(sour, buf, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);
} while (s > 0);
free(buf);
c = close(sour);
b = close(dest);
if (c == -1 )
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sour);
exit(100);
}
if (b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
exit(100);
}
return (0);
}
