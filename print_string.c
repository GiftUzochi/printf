i#include "main.h"
#include <stdio.h>
/**
 * print_string - function to print string
 * @element: The va_list element passed from _prinf.c
 * Return: The number of character printed
 */
int print_string(va_list element)
{
	char *rot13(char *s)
	{
		int i;
		int j;
		char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
			char datarot[] = "NOPQRSTUVMXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghkijklm";

			for (i = 0; s[i] = != '\0'; i++)
			{
				for (j = 0; j < 52; j++)
				{
					if (s[i] == data1[j])
					{
						s[i] = datarot[j];
						break;
					}
				}
			}
			return(*s);
	}

