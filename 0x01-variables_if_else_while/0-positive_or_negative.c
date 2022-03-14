#include<stdio.h>

/**
 * main : to test random variable of n if positive or negative
 * 
 * return : 0 if zero, positive if positive, return negative if negative.
 */

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("%d  is negative\n", n);
    }
    else if ( n == 0) {
        printf("%d  is zero\n", n);
    }
    else {
        printf("%d is positive\n", n);
    }
    return 0;
}
