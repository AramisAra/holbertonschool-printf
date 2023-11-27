#include "main.h"

/**
 * convert - converts an unsigned integer to a string in the given base
 * @num: the number to be converted
 * @base: the base to convert to
 *
 * Return: the converted number as a string
 */
char *convert(unsigned int num, int base)
{
	const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = Representation[num % base];
		num /= base;
	}

	return (ptr);
}

/**
 * _print_reverse - prints a string in reverse
 * @ap: action pointer
 *
 * Return: Number of characters printed
 */
int _print_reverse(va_list ap)
{
	int len = 0;
	int i;
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (s[len])
		++len;
	i = len - 1;
	while (i >= 0)
		_putchar(s[i--]);
	return (len);
}

/**
 * _print_rot13 - encodes a string using rot13
 * @ap: action pointer
 *
 * Return: length of the string
 */
int _ptrint_rot13(va_list ap)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rAlphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; ++i)
	{
		for (j = 0; alphabet[j]; ++j)
		{
			if (alphabet[j] == s[i])
			{
				_putchar(rAlphabet[j]);
				break;
			}
		}
		if (!alphabet[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * _print_unsigned - prints an unsigned integer
 * @ap: action pointer
 *
 * Return: number of digits printed
 */
int _print_unsigned(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *s = convert(n, 10);

	return (write(1, s, 1));
}

/**
 * _print_octal - prints an octal number
 * ap: action pointers
 *
 *Returns: number of digits printed
 */
int _print_octal(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *s = convert(n, 8);

	return (write(1, s, 1));
}
