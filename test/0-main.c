#include "./../main.h"

/**
 * main - start
 *
 * Return: 0 for success
 */
int main(void)
{
	int count;

	count = _printf("Character: %c\n", 'A');
	printf("Count: %d\n", count);

	count = _printf("String: %s\n", "Hello, World!");
	printf("Count: %d\n", count);

	count = _printf("Percent sign: %%\n");
	printf("Count: %d\n", count);

	return (0);
}

