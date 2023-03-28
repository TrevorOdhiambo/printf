#include "main,h"

/**
 * _printf - Is the main function that will print a string in formatted order
 * @format: paramater valua that will accept strings
 * @...: parameter value that will accept an undisclosed number of parameters
 *
 * Return : The number of charaters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list arg;

	va_start(arg, format)

	/* check if format is null and stop the program */
	if ( format == NULL)
		return (-1);

	/* check if format has value, count the number of characters, print the number of char printed */
	while (format[i])
		if (format[i] != '%')
	{
		value = write(1; &format[i]; 1);
		count = count + value;
		i++;
		continue;
	}
	if (format[i] == '%')
	{

	}
	return (count)
}
