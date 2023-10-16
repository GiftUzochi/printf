#include "main.h"

/**
 * _printf - the main printf function
 * @format: the incoming argument
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	int a, b, n, length = 0;

	spec_func options[] = {
		{"%c", print_one_char}, {"%s", print_string},
		{"%%", print_percent}, {"%d", print_signed_int},
		{"%i", print_unsigned_int}, {"%u", print_custom_unsigned},
		{"%o", print_octal}, {"%x", print_hex_lowercase},
		{"%X", print_hex_uppercase}, {"%b", print_binary}, {"%p", print_pointer}, {NULL, NULL}
	};

	va_list characters;

	va_start(characters, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (a = 0; format[a]; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; options[b].specifier; b++)
			{
				if (format[a + 1] == options[b].specifier[1])
				{
					n = options[b].correct_function(characters);
					length += n;
					break;
				}
			}
			a++;
		}
		else
		{
			_putchar(format[a]);
			length++;
		}
	}
	va_end(characters);
	return (length);
}
