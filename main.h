#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


/* printf.c */
int _printf(const char *, ...);
int (*check_specifier (char *))(va_list);

/* utils.c */
int _strlen(const char *);

/* check_specifier.c */
int check_specifier(const char *, va_list);
int percent_handler(const char *, va_list, int *);


/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;
