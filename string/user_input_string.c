// scanf("%s", s); it only take a word after space it stop taking input
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    
    printf("Enter a string: ");
    scanf("%s", s); // take input till space is there
    
    int len = strlen(s); //for knowing the length of string
    
    printf("Length of the string: %d\n", len);
    
    for (int i = 0; i < len; i++)
    {
        printf("%c\n", s[i]);
    }
    
    printf("Full String: %s\n", s);

    return 0;
}