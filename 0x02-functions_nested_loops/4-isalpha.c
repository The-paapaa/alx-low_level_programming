#include "main.h"
/**
  * _isalpha - function that scans alphabets
  *@c: checks initials
  *Return: 1 if an alphabet, return 0 if not
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
