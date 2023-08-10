#include <unistd.h>
/**
 * main - Entry point
 *
 * prints exactly and that piece of art is useful Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 *
 * Return: Always 1 (not Success)
 *
 */
int main(void)
{
	char mstr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, mstr, 59);
	return (1);
}
