#include "main.h"
#include <stdbool.h>

/**
 * print_field_width - function to print formatted text
 * @element: the va_list element passed in from _printf.c
 * Return: the number of characters in the string
 */
int print_string(va_list element)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++);
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (width);
}
