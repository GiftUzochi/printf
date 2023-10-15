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

	return (0);
}

