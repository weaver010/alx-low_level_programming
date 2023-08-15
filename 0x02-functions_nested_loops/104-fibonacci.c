#include <stdio.h>

int main(void)
{
        int n;
        long sum;
        long num;
        long i;
        long g;
        long c;

        i = 0;
        num = 1;
        sum = 0;
        for (n = 0; n < 100; n++)
        {
                sum = (i + num);
                if (sum <2000000000)
                {
                printf("%lu", sum);
                }
                else
                {g=sum %100000;
                      c=sum %100000;
                      printf("%lu", g);
                      printf("%lu", c);
                }
                i = num;
                num = sum;
                if (n != 99)
                {
                        printf(", ");
                }

        }
        printf("\n");
        return (0);
}
