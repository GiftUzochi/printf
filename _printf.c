#include "main.h"

/**
 * _printf - the main printf function, like a main file
 * @format: structure spec_func to match identifier and function
 * Return: the length of string passed according to rules
 */
int _printf(const char *format, ...)
{
	int length = 0, a = 0, b = 0;

	spec_func options[] = {
		{"%c", print_one_char},
		{"%s", print_string},
		{"%%", print_literal},
		{NULL, NULL}
	};

	va_list characters;

	va_start(characters, format);

	if (format == NULL)
		return (-1);

	while (format[b] != '\0')
	{
		a = 0;
		while (options[a].specifier != NULL)
		{
			if (format[b] == *options[a].specifier)
			{
				length += options[a].correct_function();
				break;
			}
			a++;
		}
		b++;
	}

	va_end(characters);

	return (length);
}
