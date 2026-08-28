#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 28, x;
    float b = 28.34;
    char c = 'A';
    double d = 31.586;
    bool e = true;
    x = a++;
    printf("Address of Integer: %p\n", &a);
    printf("Address of x: %p\n", &x);
    printf("Address of Float: %p\n", &b);
    printf("Address of Character: %p\n", &c);
    printf("Address of Double: %p\n", &d);
    printf("Address of Boolean: %p\n", &e);

// note: using %p for printing in hexadecimal format and %d for decimal format is more appropriate for addresses.

    printf("Address of Integer: %d\n", &a);
    printf("Address of x: %d\n", &x);
    printf("Address of Float: %d\n", &b);
    printf("Address of Character: %d\n", &c);
    printf("Address of Double: %d\n", &d);
    printf("Address of Boolean: %d\n", &e);
    return 0;
}