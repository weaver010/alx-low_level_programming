#include"main.h"
/**
 *read_textfile - read
 * @filename:the filename
 * @letters:the length
 * Return:n
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *ter;
ssize_t f, n, o;
f = open(filename, O_RDONLY);
if (f == -1)
{
return (0);
}
ter = malloc(sizeof(char) * letters);
o = read(f, ter, letters);
n = write(STDOUT_FILENO, ter, o);
free(ter);
close(f);
return (n);
}
