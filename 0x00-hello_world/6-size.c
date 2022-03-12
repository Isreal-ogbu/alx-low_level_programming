#include<stdio.h>

/**
 * main - print the size of a variable in a computer
 * 
 * return: 0 if computed properly, otherwise non zero
 */
int main()
{
        printf("size of a char : %d\n",sizeof(char));
        printf("size of a int : %d\n",sizeof(int));
        printf("size of a long int : %d\n",sizeof(long int));
        printf("size of a long long long int : %d\n",sizeof(long long int));
        printf("size of a float : %d\n",sizeof(float));
        return (0);
}
