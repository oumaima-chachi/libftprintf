#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // Testing characters
    ft_printf("%c\n", 'A');  // Expected: A
    ft_printf("%c\n", '\n');  // Expected: (newline)

    // Testing strings
    ft_printf("%s\n", "Hello, World!");  // Expected: Hello, World!
    ft_printf("%s\n", NULL);              // Expected: (null)

    // Testing pointer
    int num = 42;
    ft_printf("%p\n", &num);  // Expected: 0x...

    // Testing integers
    ft_printf("%d\n", 42);         // Expected: 42
    ft_printf("%d\n", -42);        // Expected: -42
    ft_printf("%d\n", 2147483647); // Expected: 2147483647
    ft_printf("%d\n", -2147483648); // Expected: -2147483648

    // Testing unsigned
    ft_printf("%u\n", 42);        // Expected: 42
    ft_printf("%u\n", -42);       // Expected: 4294967254
    ft_printf("%u\n", 4294967295); // Expected: 4294967295

    // Testing hexadecimal
    ft_printf("%x\n", 255);       // Expected: ff
    ft_printf("%X\n", 255);       // Expected: FF

    // Testing percentage sign
    ft_printf("%%\n");            // Expected: %

    // Mixed specifiers
    ft_printf("Hello %s, your age is %d and your score is %x\n", "John", 25, 255); 
    // Expected: Hello John, your
}