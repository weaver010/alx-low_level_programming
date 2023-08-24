#include "main.h"
/**
 * *infinite_add - function that adds two numbers.
 * @s: size
 * @n1: first num
 * @n2:second num
 * @r:result
 * Return:r
 */
char *infinite_add(char *n1, char *n2, char *r, int s)
{
	int l, i, b, a, o, k, j;

	o = 0;
	a = istrlen(n1);
	b = istrlen(n2);
	if (a > b)
	{
		l = a;
	}
	else
	{
		l = b;
	}
	if (l + 1 > s)
	{
		return (0);
	}
	for (i = l - 1; i >= 0; i--)
	{
		a--;
		b--;
		if (a >= 0)
		{
			k = n1[a] - '0';
		}
		else
		{
			k = 0;
		}
		if (b >= 0)
		{
			j = n2[b] - '0';
		}
		else
		{
			j = 0;
		}
		r[i] = (j + k + o) % 10 + '0';
		o = (j + k + o) / 10;
	}
	if (o == 1)
	{
		r[l + 1] = '0';
		if (l + 2 > s)
		{
			return (0);
		}
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
		}
		r[0] = o + '0';
	}
	return (r);
}
