#include "./../main.h"

/**
 * main - start
 *
 * Return: 0 for success
 */
int main(void)
{
	int count;
	int num1 = -5129, num2 = 72410874;

	count = _printf("Character: %c\n", 'A');
	printf("Count: %d\n", count);

	count = _printf("String: %s\n", "Hello, World!");
	printf("Count: %d\n", count);

	count = _printf("Percent sign: %%\n");
	printf("Count: %d\n", count);

	count = _printf("Signed integer (%%d): %d\n", num1);
	printf("Return value: %d\n", count);

	count = _printf("Unsigned integer (%%i): %i\n", num2);
	printf("Return value: %d\n", count);

	_printf("This is a %s. Hopefully it is %c success. Return %d %i\n", "test", 'a', -1024675839, 1234567890);

	return (0);
}

