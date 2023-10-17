#include "./../main.h"

/**
 * main - start
 *
 * Return: 0 for success
 */
int main(void)
{
	int positive = 10;
	int negative = -42;
	char *str = "Hello, world!";
	void *ptr = &str;
	int length;

	_printf("Custom _printf: Unsigned (%%u) - Positive: %u, Negative: %u\n", positive, negative);
	_printf("Custom _printf: Octal (%%o) - Positive: %o, Negative: %o\n", positive, negative);
	_printf("Custom _printf: Hex (%%x) - Positive: %x, Negative: %x\n", positive, negative);
	_printf("Custom _printf: Hex (%%X) - Positive: %X, Negative: %X\n", positive, negative);
	printf("Hexadecimal: %x, %X\n", negative, negative);
	length = _printf("Address of str: %p\n", ptr);
	_printf("Length: %d\n", length);
	_printf("%R, done!\n", "Hello, World!");
	_printf("%S, done!\n", "Best\nSchool");

	return (0);
}
