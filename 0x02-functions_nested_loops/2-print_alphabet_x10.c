#include "main.h"

/**
 * print_alphabet_x10 -print alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}