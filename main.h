#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for varidic funs */
#include <unistd.h>/* for write fun  */
#include <stdlib.h>
#include <stdio.h>
/**
* struct sp_char - sturct for the special character
*@ch: symbole of the speacial character
*@fun: pointer to fun to print the argurment
*/
typedef struct sp_char
{
	char ch;
	int (*fun)(va_list, int *);
} spChar;

/**
*struct signs - sturct for the special character
*@ch: symbole of the signs
*@fun: pointer to fun to print sign
*/
typedef struct signs
{
	char ch;
	void (*fun)(int, char, int, va_list, int *);
} sign;

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

int get_flags(const char *format, int *i);

/* PRECISION */
int get_precision(const char *format, int *i, va_list list);

/* SIZE */
#define S_LONG 2
#define S_SHORT 1

int get_size(const char *format, int *i);

/* WIDTH */
int get_width(const char *format, int *i, va_list list);

/* UTILS */
int is_printable(char c);
int append_hexa_code(char ascii_code, char buffer[], int i);
int is_digit(char c);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

/* HANDLE_PRINT */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],int flags, int width, int precision, int size);

/* WRITE_HANDLERS */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_unsgnd(int is_negative, int ind,
	char buffer[],
	int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

/*PRINT_CHAR*/
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*PRINT_STRING*/
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*PRINT_PERCENT*/
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_INTERGER*/
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_BINARY*/
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_UNSIGNED_NUMBER*/
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_UNSIGNED_OCT*/
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_UNSIGNED_HEX*/
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_IN_UPPER_DEXI*/
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_IN_LOWER_DEX*/
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size);
/*PRINT_POINTER*/
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*NON_PRINTABLE*/
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_IN_REVERSE*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/*PRINT_ROT13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

void print_buffer(char buffer[], int *buff_ind);
void print_buffer(char buffer[], int *buff_ind);

/*         */
int _strlen(char *s);
int _printf(const char *format, ...);

int spIndex(char ch, struct sp_char *p);

int signIndex(char ch, struct signs *p);

int _putchar(char sp_ch);

int _putstr(char *str, int len);

void _putInt(unsigned int num, int *pCount);

int print_str(va_list pa, int *pCount);

int print_ch(va_list pa, int *pCount);

int print_int(va_list pa, int *pCount);

int print_bi(va_list pa, int *pCount);

int print_rev(va_list pa, int *pCount);

#endif
