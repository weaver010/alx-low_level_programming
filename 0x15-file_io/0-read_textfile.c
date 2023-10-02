#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ter;
	ssize_t f;
	ssize_t o;
	ssize_t s;
if(filename)
{return(0);}
	f = open(filename, O_RDONLY);
	if (f == -1)
{
	return (0);}
	ter = malloc(letters*sizeof(char));
	s = read(f, ter, letters);
	o = write(STDOUT_FILENO, ter, s);
	free(ter);
	close(f);
	return (o);
}

