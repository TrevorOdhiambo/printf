#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


/* printf.c */
int _printf(const char *, ...);
int (*check_specifier (char *))(va_list);


/**
 * strct func - structure to handle specifier for printing
 * @t: parameter to compare charecters
 * @f: function pointer to handle printing
 */

typedef struct func
{
	int (*f)(va_list);
	char *t;
} fun_t;

#endif 
