#include "variadic_functions.h"


/**
 * * print_char - Prints a char.
 * * @arg: A list of arguments pointing to
 * * the character to be printed.
 * */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}

/**
 * * print_int - Prints an int.
 * * @arg: A list of arguments pointing to
 * * the integer to be printed.
 * */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);

	printf("%d", num);
}
