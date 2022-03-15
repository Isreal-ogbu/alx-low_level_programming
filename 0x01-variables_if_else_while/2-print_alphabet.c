#include <stdio.h>
/**
 * main - main block
 * Description : To print lowwer case letter
 * return: 0
 */
int main(void)
{
        char c = "a";
        while (c <= "z")
        {
                putchar (c);
                c++;
            
        }
        putchar ("\n");

        return (0);
}
