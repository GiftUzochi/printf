#include "main.h"

/**
 * print_unsigned_int - Function to print an unsigned integer
 * @element: The va_list element passed in from _printf.c
 * Return: The number of characters printed
 */
int print_unsigned_int(va_list element)
{
	int num;
	int i = 0, length = 0;
	int digits[10];

	num = va_arg(element, int);

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

	for (i--; i >= 0; i++)
	{
		_putchar(digits[i] + '0');
		length++;
	}

	return (length);
}
