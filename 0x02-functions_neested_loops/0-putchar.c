#include "main.h"


/**
 * main -Entry point
 *
 * Return: nothing, return void
 */
int main(void)
{
	char yise[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(yise[c]);
	}
	_putchar('\n');

	return (0);
}

