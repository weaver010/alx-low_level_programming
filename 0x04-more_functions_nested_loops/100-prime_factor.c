#include <stdio.h>
/**
 *main - prints the largest prime factor of
 *the number "612852475143"
 *Return:0
 *
 *
 *
 */
int main(void)
{
	long o;
	long i;

	o = 612852475143;
	i = 612852475143;
	for (i = 3; i < 800000; i += 2)
	{
		while ((o % i == 0) && (o != i))
		{
			o = o / i;
		}
	}
	printf("%lu\n", o);
	return (0);
}
