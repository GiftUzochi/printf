#include "./../main.h"

/**
 * main - function
 * Return: 0 for success
 */
int main(void)
{
	printf("%d\n", 42);
	printf("%+d\n", 42);
	printf("% d\n", 42);
	printf("%#o\n", 255);
	printf("%#x\n", 255);
	printf("%#X\n", 255);

	_printf("%d\n", 42);
	_printf("%+d\n", 42);
	_printf("% d\n", 42);
	_printf("%#o\n", 255);
	_printf("%#x\n", 255);
	_printf("%#X\n", 255);

	return (0);
}
