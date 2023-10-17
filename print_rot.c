#include "main.h"

/**
 * print_rot - function to print rot string
 * @element: The va_list element passed from _prinf.c
 * Return: The number of character printed
 */
int print_rot(va_list element)
{
	int i, j, num = 0;
	char *s = va_arg(element, char *);

	char alpha_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_chars[] = "nopqrstuvwxyzabcdefghkijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = ("null");

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha_chars[j])
			{
				_putchar(rot_chars[j]);
				num++;
				break;
			}
		}
	}

	return (num);
}
