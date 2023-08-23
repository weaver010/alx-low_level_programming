#include "main.h"
/**
 * reverse_array - Write a function that
 * reverses the content of an array of integers
 *@a:the array
 *@n:size of array
 *Return:void
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i, u;
	int b[n / 2];

	u = 0;
	for (i = n - 1; i > n / 2; i--)
	{
		b[u] = a[i];
		a[i] = a[u];
		a[u] = b[u];
		u++;
	}
}
