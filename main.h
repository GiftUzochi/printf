#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct format - collection of every specifier matched to function
 * @specifier: the specifier required
 * @function: pointer to the function to use
 */
typedef struct format
{
	char *specifier;
	int (*correct_function)();
} spec_func;

/* Prototype */
int _putchar(char c);
int _printf(const char *format, ...);
int print_one_char(va_list element);
int print_string(va_list element);
int print_percent(void);
int print_signed_int(va_list element);
int print_unsigned_int(va_list element);
int print_custom_unsigned(va_list element);
int print_octal(va_list element);
int print_hex_lowercase(va_list element);
int print_hex_uppercase(va_list element);
int print_binary(va_list element);

#endif 
