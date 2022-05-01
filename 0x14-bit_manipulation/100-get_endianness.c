#include "main.h"

/** 
  * Write a C program to find out if the underlying
  * @n: decimal number
  * @index: index of the bit
  * Return: If an error occurs - -1.
  * Otherwise - 1. 
 */
int get_endianness(void)
{

    int x = 1;

    char *y = (char*)&x;

    printf("%c\n",*y+48);
}
