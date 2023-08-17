#include <stdio.h>

int prime(int n) 
{
	int i;
	
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
}

int main()
{
	long o;
	int d;
	long i;
	long n;

	o = 612852475143;
	n = 612852475143;
	for (i = 2; i <= n / 10000000; i++)
	{
		if(prime(i))
		{
			if (o % i == 0)
			{
				d = i;
			}
		}
	}
	printf("%lu\n",d);
}
