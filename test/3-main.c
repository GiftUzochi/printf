#include "./../main.h"

/**
 * main - start
 *
 * Return: 0 for success
 */
int main(void)
{
	int positive = 42;
	int negative = -42;

	_printf("Custom _printf: Unsigned (%%u) - Positive: %u, Negative: %u\n", positive, negative);
	_printf("Custom _printf: Octal (%%o) - Positive: %o, Negative: %o\n", positive, negative);
	_printf("Custom _printf: Hex (%%x) - Positive: %x, Negative: %x\n", positive, negative);
	_printf("Custom _printf: Hex (%%X) - Positive: %X, Negative: %X\n", positive, negative);
	printf("Hexadecimal: %x, %X\n", negative, negative);

	return (0);
}
