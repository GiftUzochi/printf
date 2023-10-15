#include "main.h"

/**
 * print_custom_unsigned - Custom specifier for signed integers
 * @element: The va_list element passed in from _printf.c
 * Return: The number of characters printed
 */
int print_custom_unsigned(va_list element)
{
	unsigned int num;
	int i = 0, length = 0;
	int digits[10];

	num = va_arg(element, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		digits[i] = num % 10;
		num /= 10;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
		length++;
	}

	return (length);
}

