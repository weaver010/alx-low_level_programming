#include <stdio.h>

int main(void)
{
        float n;
        float sum;
        float num;
        float i;

        i = 0;
        num = 1;
        sum = 0;
        for (n = 0; n < 98; n++)
        {
                sum = (i + num);
               
               printf("%.0f", sum);
                
                i = num;
                num = sum;
		if (n !=97)
		{
			 printf(", ");
		}
                

        }
        printf("\n");
        return (0);
}
