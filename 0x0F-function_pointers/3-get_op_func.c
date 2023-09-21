#include <stddef.h>
#include"3-calc.h"
/**
 * *get_op_func - see to know
 * @s:the op
 * Return:func
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};
int  i = 0;
while (i < 5)
{
if (s[0] == ops[i].op[0] && !s[1] && s)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}