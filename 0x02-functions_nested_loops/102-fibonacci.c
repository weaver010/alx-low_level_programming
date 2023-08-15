#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: 0
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
	long sum;
	long num;
	long i;

	i = 0;
	num =1;
	sum = 0;
	for (n = 0; n < 50; n++)
	{
		sum = (i + num);
		i =num;
		num = sum;

		printf("%lu, ", sum );
	}
	return (0);
}
