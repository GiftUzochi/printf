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
while (format[i] >= '0' && format[i] <= '9');
	fieldwidth = fieldwidth * 10 + (format[i] - '0');
	i++;
}
if (format[i] == 'd' || format[i] == 's' || format[i] == 'f')
{
	if (format[i] == 'd')
	{
		int value = va_arg(args, int);
		_putchar("%d", fieldwidth, value);
	}
	else if (format[i] == "s")
	{
		char str = va_arg(args, char);
		_putchar("%s", fieldwidth, str);
	}

