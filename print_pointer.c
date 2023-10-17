#include "main.h"

/**
 * print_pointer - Function to print a pointer
 * @element: The va_list element passed in from _printf.c
 * Return: The number of characters printed
 */
int print_pointer(va_list element)
{
	void *pointer = va_arg(element, void *);
	char buffer[16];
	unsigned long int value;
	int j, length = 0;

	if (pointer == NULL)
	{
		_putchar('0');
		_putchar('x');
		_putchar('0');
		return (3); /* Length of "0x0" */
	}

	value = (unsigned long int)pointer;

	while (value != 0)
	{
		buffer[length] = "0123456789abcdef"[value % 16];
		value /= 16;
		length++;
	}

	_putchar('0');
	_putchar('x');

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (length + 2); /* Length of "0x" plus the hexadecimal value */
}

