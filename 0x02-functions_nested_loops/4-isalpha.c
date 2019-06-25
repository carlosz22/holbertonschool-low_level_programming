#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - Check for alphabetic characters
 * @c: Integer holding the character
 * Return: 1- Alphabetic character 0- Not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}