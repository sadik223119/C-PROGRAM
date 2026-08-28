#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 28;
    float b = 28.34;
    char c = 'A';
    double d = 31.586;
    bool e = true;
    printf("Address of Integer: %p\n", &a);
    printf("Address of Float: %p\n", &b);
    printf("Address of Character: %p\n", &c);
    printf("Address of Double: %p\n", &d);
    printf("Address of Boolean: %p\n", &e);
    return 0;
}