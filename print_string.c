#include "main.h"

/**
 * print_string - function to print string
 * @element: The va_list element passed from _prinf.c
 * Return: The number of character printed
 */
int print_string(va_list element)
{
		int i, j, value = 0;
		int k = 0;
		char *s = va_arg(args, char*);

		char data[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char alpha[] = "nopqrstuvwxyzabcdefghkijklmNOPQRSTUVWXYZABCDEFGHIJKLM;

		IF (s == NULL)
			s = "(null)";
		for (i = 0; s[i]; i++)
		{
			k = 0;
			for (j = 0; data[j] && !k; j++)
			{
				if (s[i] == data[j])
				{
					_putchar(alpha[j]);
					character++;
				}
			}
			return (character);
		}

