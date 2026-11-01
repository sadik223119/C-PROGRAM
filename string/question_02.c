/* Write a program to take string as an input from the user using %c and %s and
confirm that the strings are equal. */
#include <stdio.h>
#include <string.h>
int main()
{
    char st1[6];
    char st2[6];
    printf("Enter the string using c : ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &st1[i]);
    }
    st1[6] = ('\0');

    printf("Enter a string using s : ");
    scanf("%s", st2);
    printf("The c string is ");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", st1[i]);
    }
    printf("\nThe s string is %s", st2);
    return 0;
}