// strlen() , strcpy() , strcat() , strcmp()
#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    char st2[100];
    printf("Enter the string: ");
    fgets(st, sizeof(st), stdin);
    int len = strlen(st);
    printf("The string length is: %d\n", len);
    printf("The string is: ");
    puts(st);

    /* strcpy()
    This function is used to copy the content of second string into first string passed to it. */
    strcpy(st2, st); // strcpy (target, source);
    printf("The 2nd string is: ");
    puts(st2);

    /* strcat()
    This function is used to concatenate two strings. */
    strcat(st2, st); // <no space in between>
    printf("The concatenate string is: ");
    puts(st2);

    int result = strcmp("deep", "joke"); // Negative value
    printf("Compare Result is: %d", result);
    return 0;
}