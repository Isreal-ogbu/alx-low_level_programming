#include <stdio.h>
#include main.h
/**
 * main - main block
 * Description: Write a function that prints the alphabet, in lowercase, followed by a new line.
 * prototype: void print_alphabet(void).
 * You can only use `_putchar` twice in your code.
 * Return 0
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');

    return (0);
}
