#include "main.h"

/**
 * print_s - function to replace string
 * @element: the input
 * Return: length of characters printed
 */
int print_s(va_list element)
{
	char *c = va_arg(element, char *);
	int hex_value, length = 0;

	if (c == NULL)
		c = "(null)";

	while (c[length] != '\0')
	{
		if ((c[length] > 0 && c[length] < 32) || c[length] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			hex_value = atoi(&c[length]);
			length += print_hex_uppercase_num(hex_value);
		}
		else
		{
			_putchar(c[length]);
			length++;
		}
	}

	return (length);
}
