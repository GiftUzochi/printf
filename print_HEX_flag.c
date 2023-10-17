#include "main.h"

/**
 * print_HEX_flag - Function to print hex rep in uppercase
 * @element: The va_list element passed in from _printf.c
 * Return: The number of characters printed
 */
int print_HEX_flag(va_list element)
{
	int num = va_arg(element, int);
	int rem, i = 0, length = 0;
	char hex_chars[32]; /* Also 32-bit representation */

	_putchar('0');
	_putchar('X');
	length += 2;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 16)
	{
		_putchar('0');
		length++;
	}

	while (num > 0)
	{
		rem = num % 16;

		if (rem < 10)
			hex_chars[i] = rem + '0';
		else
			hex_chars[i] = (rem - 10) + 'A';

		num /= 16;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(hex_chars[i]);
		length++;
	}

	return (length);
}
