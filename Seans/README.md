<<<<<<< HEAD
# holbetonschool-printf
This Branch show all the work Aramis did for his part of the work.
=======
#C - Printf
## Description
Task: Create a simple exact replica of the printf() function found in the C programming language.
Using Variadic functions, structs, and multiple (name the helper functions) the program we created will be able to display the same results when used by the actual printf() function. What we want to accomplish with our projectis to show an alternative method of creating your own printf() functions in the C programming language. If the function printf() is succesfully compiled and executed, it should return the count of characters printed, excluding the null byte used to terminate strings. In case of failure, the function is designed to return -1 as an error indicator. Additionally, if the string argument is NULL, the function returns the string "(null)". IF the format specifier is unknow (not recognized by the code), the output will display the format specifier itself as a string.
Although the current implementation of the code can handle all format specifiers, only fie have been utulized so far due to the simplicity of the code. There are plans to update the printf repository in the future to include support for more format specifiers.

###  Prototype
	'int _prinf(const char *format, ...)'
	
 Returns: The function returns the count of characters printed, not including the null byte used to terminate strings. It outpts the result to the result to the standard output stream ('stdout'). The 'format' parameter is a character string, and this string can contains zero or more directives. For more details on the format directives, you can refer to the manual page 'man 3 printf'.

### File Usage
	File name | Description
	--- | ---
	[_printf.c](github/aramis/printf/master/_printf.c | the main _printf.c file is used to handle the array containing all the format specifiers used. Ass well as where the function starts to execute.
i	[_get_print.c](github.....)





# Format specifiers
	The _printf program will replicate the effects of the listed % format specifiers as when used with printf().

	Function name | Description | Format Specifier
	--- | --- | ---

	'_print_char' | Prints a single character | '%c'
	'_print_string' | Prints a string | etc


### Compilation


### Testing the program
	The main.c File test
	Create a main.c file to test the custom 'pprint' function and verify if it behaves in a manner similar to the standard 'printf', accurately displaying the count of charcters printed. The 'main.c' file should include the rpovided code below. Feel free to modify the code within 'main.c' to test various cases beyond those currently shown.

	alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

	/**
	 * main - Entry point
	 * Return: Always 0
	 */
	int main(void)
	{
    		int len;
    		int len2;
    		unsigned int ui;
    		void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
	}	
	
	Output check

	Your output after compilling the program should look like something like is displayed below.

	alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	alex@ubuntu:~/c/printf$ ./printf
	Let's try to printf a simple sentence.
	Let's try to printf a simple sentence.
	Length:[39, 39]
	Length:[39, 39]
	Negative:[-762534]
	Negative:[-762534]
	Unsigned:[2147484671]
	Unsigned:[2147484671]
	Unsigned octal:[20000001777]
	Unsigned octal:[20000001777]
	Unsigned hexadecimal:[800003ff, 800003FF]
	Unsigned hexadecimal:[800003ff, 800003FF]
	Character:[H]
	Character:[H]
	String:[I am a string !]
	String:[I am a string !]
	Address:[0x7ffe637541f0]
	Address:[0x7ffe637541f0]
	Percent:[%]
	Percent:[%]
	Len:[12]
	Len:[12]
	Unknown:[%r]
	Unknown:[%r]
	alex@ubuntu:~/c/printf$
	
	Bugs:






	About:

	Authors:
	Sean Cardona
	Aramis Martinez

	Acknowledgments
	Sean Cardona, Aramis Martinez

>>>>>>> d68fc7116947a3a02ca79671e55358d23da8ba1f
