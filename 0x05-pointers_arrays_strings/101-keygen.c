#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - generates random valid passwords for the program
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
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 4000)
	{
		c = rand();
		sum += c;
		putchar(c);
	}
	putchar(sum);
	return (0);
}
