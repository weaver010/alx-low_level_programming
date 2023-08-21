#include "main.h"
/**
 *swap_int -  that swaps the values of two integers.
 *@a: pointer of frist num
 *@b:pointer of first num
 *Return:void
 *
 *
 *
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
