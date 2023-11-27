#include "main.h"
/**
* _write_char - writes the character c to stdout
* @c: the character to print
*
* Return: the number of characters printed (always 1).
*/
int _write_char(char c)
{
	return (write(1, &c, 1));
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
