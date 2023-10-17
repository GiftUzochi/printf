#include "main.h"
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


