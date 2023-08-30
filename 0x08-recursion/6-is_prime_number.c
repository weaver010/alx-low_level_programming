#include "main.h"
/**
 * check_prime - check if prime
 * @n:number
 * @i:num
 * Return:1
 */
int check_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (check_prime(n, i - 1));
}
/**
 * is_prime_number - that returns 1 if the input
 * integer is a prime number
 * @n:number
 * Return:1
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, n - 1));
}
