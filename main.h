#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <unistd.h>

/**
 * struct format - collection of every specifier matched to function
 * @specifier: the specifier required
 * @function: pointer to the function to use
 */
typedef struct format
{
	char *specifier;
	int (*function)();
} spec_func;

/* Prototype */
int _put(char c);
int _printf(const char *format, ...);

#endif 
