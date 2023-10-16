#include "main.h"

/**
 * print_pointer - function used to print pointer
 * @element: the va_list element p to format and print pointers
 * Return: The number of character printed
 */
int print_pointer(va_list element)
void *pointer;
int value = 0;
pointer = va_arg(element void *);
if (pointer == NULL)
{
	_putchar(NULL)
}
else
{
	_putchar("%p", pointer);
}
return value;

