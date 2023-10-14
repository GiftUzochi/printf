#include "main.h"

/**
 * main - start
 *
 * Return: 0 for success
 */
int main(void)
{
	int count;

	count = _printf("Hello, %s! My favorite letter is %c%%.\n", "world", 'A');
	printf("Count: %d\n", count);

	return (0);
}
