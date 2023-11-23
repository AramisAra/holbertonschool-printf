#include "main.h"
/**
* write_char - writes the character c to stdout
* @c: the character to print
*
* Return: the number of characters printed (always 1).
*/
int _write_char(char c)
{
	return (write(1, &c, 1));
}
