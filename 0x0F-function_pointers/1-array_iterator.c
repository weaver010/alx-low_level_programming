#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - try and youy will know
 * @array: the integer to print
 * @size:the size
 * @action:the action
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{size_t i;
if (action && array)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
