#include "main.h"

/**
 * print_int_flag2 - print signed ints
 * @element: the argument passed
 * Return: number of characters
 */
int print_int_flag2(va_list element)
{
	int num, i = 0, length = 0;
	int digits[10];

	num = va_arg(element, int);

	if (num > 0)
	{
		_putchar(' ');
		length++;
	}
	if (num < 0)
	{
		_putchar(45);
		num = -num;
	}

	if (num == 0)
	{
		_putchar(48);
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
