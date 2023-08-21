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
	while (sum <= 3000)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(3127 - sum);
	return (0);
}
