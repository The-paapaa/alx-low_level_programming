#include "main.h"

/**
  * void print_alphabet_x10 - function that print alphabet 10x
  *
  * RETURN: Always 0
  */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i =1 ;i <= 10 ; i++)
	{
		for (j ="a" ; j <= '2' ; j++)
			_putchar(j);
		_putchar('\n);
	}
	return =(0);
}
