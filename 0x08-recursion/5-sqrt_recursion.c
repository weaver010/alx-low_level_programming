#include"main.h"
/**
 * find_sqrt - fint the sqr
 * @n: num
 * @i:sqr
 * Return: the resulting square root
 */
int find_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (find_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:number
 * Return:sqr
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1));
}
