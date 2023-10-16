#include "main.h"

/**
 * print_pointer - Function to print a pointer
 * @element: The va_list element passed in from _printf.c
 * Return: The number of characters printed
 */
int print_pointer(va_list element)
{
	void *pointer = va_arg(element, void *);
	char nil[] = "(nil)";
	int i;
	unsigned long int value;
	char buffer[16];
	int length = 0;

	if (pointer == NULL)
	{
		for (i = 0; nil[i]; i++)
		{
			_putchar(nil[i]);
		}
		return (5); /* Length of "(nil)" */
	}

	value = (unsigned long int)pointer;

	if (value == 0)
	{
		_putchar('0');
		length++;
	}
	else
	{
		while (value != 0)
		{
			buffer[length] = "0123456789abcdef"[value % 16];
			value /= 16;
			length++;
		}

		for (i = length - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
		}
	}

	return (length);
}

