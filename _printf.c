#include "main.h"
#include <stdarg.h>

/**
 * _printf - the main printf function, like a main file
 * @format: structure spec_func to match identifier and function
 * Return: the length of string passed according to rules
 */
int _printf(const char *format, ...)
{
	int a = 0, b = 0, length = 0;
	int n;

	spec_func options[] = {
		{"%c", print_one_char},
		{"%s", print_string},
		{"%%", print_percent},
		{NULL, NULL}
	};

	va_list characters;

	va_start(characters, format);

	if (format == NULL)
		return (-1);

	while (format && format[a])
	{
		b = 0;
		while (options[b].specifier)
		{
			if (format[a] == *options[b].specifier)
			{
				n = options[b].correct_function();
				length += n;
				break;
			}
			b++;
		}
		a++;
	}

	_putchar('\n');
	va_end(characters);

	return (length);
}
