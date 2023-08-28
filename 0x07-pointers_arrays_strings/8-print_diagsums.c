#include"main.h"
#include<stdio.h>
/**
 * print_diagsums -  function that prints the sum of the two diagonals of a square matrix of integers
 * @a:the matrix
 * @size:the size
 * Return:void
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		d += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", s, d);
}
