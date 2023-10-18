#include "./../main.h"

/**
 * main - simple
 * Return: 0 for success
 */
int main(void)
{
	char *str = "Hello, World!";
	int num = 42;
	unsigned int uint = 12345;
	char c = 'A';

	printf("Testing _printf function:\n");

	printf("_printf: %%c: %c\n", c);
	_printf("_printf: %%c: %c\n", c);

	printf("_printf: %%s: %s\n", str);
	_printf("_printf: %%s: %s\n", str);

	printf("_printf: %%d: %d\n", num);
	_printf("_printf: %%d: %d\n", num);

	printf("_printf: %%u: %u\n", uint);
	_printf("_printf: %%u: %u\n", uint);

	printf("Testing flags with _printf:\n");
	printf("_printf: %%+d: %+d\n", num);
	_printf("_printf: %%+d: %+d\n", num);

	printf("_printf: %% d: % d\n", num);
	_printf("_printf: %% d: % d\n", num);

	printf("_printf: %%#x: %#x\n", num);
	_printf("_printf: %%#x: %#x\n", num);

	printf("Testing %%S for special characters:\n");
	_printf("_printf: %%S: %S\n", "Best\tSchool\n");

	printf("Testing %%R for ROT13:\n");
	_printf("_printf: R: %R\n", "Hello, World!");

	return (0);
}

