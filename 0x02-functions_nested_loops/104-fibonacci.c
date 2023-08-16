#include <stdio.h>
int len(int n)
{
	int l;
	l=0;
	if (n==0)
	{
		return(1);
	}
	while(n>0)
	{
		n=n/10;
		l=l+1;
	}
	return (l);
}

int main(void)
{
        int  c;
        int  init;
        long num1=1;
        long num2=2;
	long sum;
	long max=1000000000;
	long num3=0;
	long num4=0;
	long sum2=0;

        for (c = 1; c < 99; c++)
        {
		if (num3>0)
		{
			printf("%lu",num3);
		}
		init=len(max)-1-len(num1);
		while(num3>0 && init >0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu",num1);

                sum =(num1+num2)%max;
		sum2=num3+num4+(num1+num2)/max;
		num1=num2;
		num3= num4;
		num2=sum;
		num4=sum2;
		if(c!=98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
        return (0);
}
