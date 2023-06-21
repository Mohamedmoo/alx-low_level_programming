#include "main.h"

/**
 * _isalpha - checks for alphabetic
 * @c: the character in ASCII code
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else{
		return (0);
	}
}
