#include "main.h"

/**
 * print_field_width - function to print formatted text
 * @element: the va_list element passed in from _printf.c
 * Return: the number of characters in the string
 */
int print_string(va_list element)
va_list args;
va_start(args, format);

int i = 0;
while (format[i])
{
	if (format[i] = '%')
		i++;
int fieldwidth = 0;


