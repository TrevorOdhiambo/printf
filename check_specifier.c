#include "main.h"

/**
 * check_specifier - This function check if the character is a valid specifier
 * and assign it to a an appropraite function for printing
 * @format: specifier parameter
 * Return: pointer to a function
 */

int (*check_specifier (char *format))(va_list)
{

	fun_t my_array[3] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{NULL, NULL}};
	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (my_array[i].t == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL)
}
