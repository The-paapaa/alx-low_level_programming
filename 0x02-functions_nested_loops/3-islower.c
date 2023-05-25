#include "main.h"

/**
  * _islower - function to prints lower case
  *
  * @c: initials to be displayed
  *
  * Return :1 if a lower case and return 0 if not
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
