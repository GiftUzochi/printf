#include "main.h"

/**
 * print_string - prints string
 * @element: the input
 * Return: number of characters printed
 */
int print_string(va_list element)
{
	char *s;
	int i = 0, length = 0;

	s = va_arg(element, char *);

	if (s == NULL)
		s = ("null");

	while (s[length] != '\0')
	{
		_putchar(s[i]);
		i++;
		length++;
	}

	return (length);
}
