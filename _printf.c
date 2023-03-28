#include "main.h"

/**
 * _printf - Is the main function that will print a string in formatted order
 * @format: paramater valua that will accept strings
 * @...: parameter value that will accept an undisclosed number of parameters
 *
 * Return : The number of charaters printed
 */

int _printf(const char *format, ...)
{
	int num_of_characters;
	
	va_list args;

	/* check if format is null and stop the program */
	if ( format == NULL)
		return (-1);


	/* check if format has value, count the number of characters, print the number of char printed */
	num_of_characters = _strlen(format);

	if (num_of_characters <= 0)
		return (0);

	va_start(args, format);

	num_of_characters = handler(format,args);

	_putchar(-1);
	va_end(args);

	return (num_of_characters);
}
