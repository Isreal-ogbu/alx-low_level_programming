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
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("Underlying architecture is little endian. \n");
  }
  else
  {
     printf ("Underlying architecture is big endian. \n");
  }
 
  return 0;
}
