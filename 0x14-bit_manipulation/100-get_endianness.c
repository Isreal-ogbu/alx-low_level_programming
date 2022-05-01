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
    int x = 0x76543210;
    char *c = (char*) &x;
    

    if (*c == 0x10)
    {
        printf ("little endian\n");
    }
    else
    {
        printf ("big endian. \n");
    }
    
    return 0;
}
