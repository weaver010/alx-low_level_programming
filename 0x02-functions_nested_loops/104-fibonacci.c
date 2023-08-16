// Online C compiler to run C program online
#include <stdio.h>

int main(void)
{
        float n;
        float sum;
        float num;
        float i;
        float g;
        long c;

        i = 0;
        num = 1;
        sum = 0;
        for (n = 0; n < 100; n++)
        {
                sum = (i + num);
               
                printf("%g   ", sum);
                
                i = num;
                num = sum;
                

        }
        printf("\n");
        return (0);
}
