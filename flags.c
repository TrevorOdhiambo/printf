#include "main.h"

/**
*call_sp - fun that get the fun and call it and check
*for signs
*@format: the str format
*@i: pointer to the index of our format
*@p: pointer to out struct
*@pCount: pointer to our counter
*@pa:pointer to our arguments
*/
void call_sp(const char *format, int *i, struct sp_char *p,int *pCount, va_list pa)
{
        int j, k = 3;
        va_list ap; /* to copy the pa */
        int index = *i;
        int flagg = 0;
        sign flag[] = {{'+', postive_sign}, {' ', space_sign}, {'#', window_sign},
                {'\0', NULL}};

        va_copy(ap, pa); /* copy the list of the arguments */
        while (signIndex(format[index], flag) != -1)
        {
                for (k = 0; flag[k].ch != '\0'; k++)/* if there are flags */
                {
                        if (format[index] == flag[k].ch)
                        {
                                if (format[index] == '+' && flagg < 2)
                                        flagg = 1;
                                else if (format[index] == '#')
                                        flagg = 2;
                                index++;
                                break;
                        }
                }
        }
        j = spIndex(format[index], p);/* get the index of the sp */
        if (j != -1) /* make sure it match */
        {
                if (flag[k].ch != '\0')
                        flag[k].fun(flagg, flag[k].ch, j, ap, pCount);/* print flag */
                p[j].fun(pa, pCount); /*print the argument  */
                *i = index;
        }
        else
        {
                _putchar('%');
                (*i)--;
                *pCount += 1;
                return;
        }
}
