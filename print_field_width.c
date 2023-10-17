#include "main.h"

/**
 * print_field_width - function to print formatted text
 * @element: the va_list element passed in from _printf.c
 * Return: the number of characters in the string
 */
int print_field_width(va_list element)
{
	int width = 0;
	char *s = va_arg(element, char *);

	while (s[width] != '\0')
	{
		_putchar(s[width]);
		width++;
	}

	return (width);
}
