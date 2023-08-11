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
	int p;

	for (n = 48; n < 58; n++)
	{
		k = 48;
		for (k = 48; k < 58; k++)
		{
			p = 48;
			for (p = 48; p < 58; p++)
			{
				if (n != k && n < K && k != p && k < p)
				{
					putchar(n);
					putchar(k);
					putchar(p);
					if (n != 55 || k != 56 || p != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
