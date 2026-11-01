// how to write a string
#include <stdio.h>
int main()
{
    char s[] = "sadik"; // type one
    char p[] = {'s', 'a', 'd', 'i', 'k', '\0'}; // type two
    printf("%s\n", s);
    printf("%s\n", p);
    return 0;
}