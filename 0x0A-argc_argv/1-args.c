#include<stdio.h>
/**
 * main-entry point
 * @argc:size
 * @argv:array
 * Return:0
 *
 */
int main(int argc, char __attribute__ ((__unused__)) **argv)
{int a;
a = argc - 1;
printf("%d\n", a);
return (0);
}
