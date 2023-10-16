#include "main.h"

/**
 * print_binary - Fxn to convert to binary
 * @element: the va_list element b argument converted to binary printf.c
 * Return: the number in characters printed
 */
int print_binary(va_list element)
{
	unsigned int value = va_arg(element, unsigned int);
	int i = 0, rem, length = 0;
	char digits[32];

	if (value == 0)
	{
		_putchar ('0');
		return (1);
	}

	while (value > 0)
	{
		rem = value % 2;
		digits[i] = rem + '0';
		value /= 2;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(digits[i]);
		length++;
	}

	return (length);
}
