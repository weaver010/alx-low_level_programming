#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int k;
	int i;
	int g;

	k = 48;
	g = 47;
	for (n = 0; n < 10 ; n++)
	{
		g++;
		k++;
		for (i = k; i < 58; i++)
		{
			putchar(g);
			putchar(i);
			if (g != 56 && k != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		return (0);
	}
}
