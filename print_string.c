#include "main.h"
#include <string.h>

/**
 * print_string - function to print one char
 * @element: the va_list element passed in from _printf.c
 * Return: the number of charactes in the string
 */
int print_string(va_list element)
{
	char *s;
	int i = 0, length = 0;

	s = va_arg(element, char *);

	if (s == NULL)
		s = "(nil)";

	while (s[length] != '\0')
	{
		_putchar(s[i++]);
		i++;
		length++;
	}

	return (length);
}
