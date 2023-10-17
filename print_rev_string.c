#include "main.h"

/**
 * print_rev_string - prints string
 * @element: the input
 * Return: number of characters printed
 */
int print_rev_string(va_list element)
{
	char *s;
	int i = 0, length = 0;
	char buf[BUFFER_SIZE];

	s = va_arg(element, char *);

	if (s == NULL)
		s = ("null");

	while (s[length] != '\0')
	{
		buf[i] = s[length];
		i++;
		length++;
	}

	for (i--; i >= 0; i--)
		_putchar(buf[i]);

	return (length);
}
