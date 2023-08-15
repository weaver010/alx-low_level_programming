#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5
 *Return: 0
 *
 *
 *
 *
 *
 *
 *
 *
 */
int main(void)
{
	int n;
	int sum;

	sum = 0;
	for (n = 1024; n >= 0; n--)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
