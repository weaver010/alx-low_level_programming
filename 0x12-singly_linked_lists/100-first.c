#include<stdio.h>
/**
 * u -print before main
 *
 *Return:void
 */
void u(void)__attribute__((constructor));
void u(void)
{
printf("You're beat! and yet, you must allow,
		\nI bore my house upon my back!\n");
}
