#include "main.h"

/**
 * print_oct_flag - Function to print octal representation
 * @element: The va_list element passed in from _printf.c
 * Return: The number of characters printed
 */
int print_oct_flag(va_list element)
{
	unsigned int num = va_arg(element, unsigned int);
	int i = 0, rem, length = 0;
	char oct_chars[32]; /* Octal is 32-bit representation */

	_putchar('0');
	length++;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		rem = num % 8;
		oct_chars[i] = rem + '0';
		num /= 8;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(oct_chars[i]);
		length++;
	}

	return (length);
}
