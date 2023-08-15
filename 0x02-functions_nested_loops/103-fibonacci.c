#include<stdio.h>
/**
 * main - entry point
 *
 *Return: 0
 *
 *
 *
 *
 *
 */
int main(void)
{
	long i;
	long n;
	long sum;
	long t;

	i = 1;
	n = 0;
	sum = 0;

	while(sum < 4000000)
	{
		sum = i +n;
		if (sum %  2== 0)
		{
			t = t +sum;
		}
		n = i;
		i = sum;
	}
	printf("%lu\n", t);
	return (0);
}

