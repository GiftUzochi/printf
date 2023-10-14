#include "main.h"

/**
 * print_literal - function to print % literal
 * @element: the va_list element passed in from _printf.c
 * Return: the number of charactes in the string
 */
int print_literal(va_list element)
{
	(void)element;
	_putchar('%');
	return (1);
}
