// gets() and fget() are the function which can be used to receive a multi-word string.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter a string: ");
    // gets(s); take input from user
    fgets(s, sizeof(s), stdin); // এখানে stdin (Standard Input) অর্থ হলো কিবোর্ড (Keyboard)। অর্থাৎ, ইউজার কিবোর্ডে যা টাইপ করবেন, তা রিড করতে হবে।

    int len = strlen(s); // for knowing the length of string

    printf("Length of the string: %d\n", len);

    for (int i = 0; i < len; i++)
    {
        printf("%c\n", s[i]);
    }

    printf("Full String: %s\n", s);
    puts(s);

    return 0;
}