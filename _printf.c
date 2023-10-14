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
		{"%%", print_percent}, {NULL, NULL}
	};

	va_list characters;

	va_start(characters, format);

	if (format == NULL)
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
