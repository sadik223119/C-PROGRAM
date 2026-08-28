#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 28;
    float b = 28.34;
    char c = 'A';
    double d = 31.586;
    bool e = true;
    printf("size of Integer: %d\n", sizeof(a));
    printf("size of Float: %d\n", sizeof(b));
    printf("size of Character: %d\n", sizeof(c));
    printf("size of Double: %d\n", sizeof(d));
    printf("size of Boolean: %d\n", sizeof(e));
    return 0;
}