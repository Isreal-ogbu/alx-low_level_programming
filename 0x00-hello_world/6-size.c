#include<stdio.h>

/**
 * main - print the size of a variable in a computer
 * return: 0 if computed properly, otherwise non zero
 */
int main(void)
{
        printf("size of a char : %d byte(s)\n",sizeof(char));
        printf("size of a int : %d byte(s)\n",sizeof(int));
        printf("size of a long int : %d (byte)\n",sizeof(long int));
        printf("size of a long long long int : %d (byte)\n",sizeof(long long int));
        printf("size of a float : %d byte(s)\n",sizeof(float));
        return (0);
}
