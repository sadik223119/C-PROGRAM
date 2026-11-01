// Find length without using function
#include <stdio.h>
int main()
{
    char string[100];
    int count = 0, i = 0;
    printf("\n Enter a String: ");
    scanf("%s", string);
    while (string[i] != '\0')
    {
        count++;
        i++;
    }
    printf("\n String Length is: %d", count);
}