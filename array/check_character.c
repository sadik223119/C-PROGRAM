#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100], ch;
    int acount=0, dcount=0, vcount=0, ccount=0, scount=0, spcount=0, i=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (isalpha (str[i]))
        {
            acount++;
            ch = tolower(str[i]);
            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vcount++;
                break;
            default:
                ccount++;
            }
        }
        else if (isdigit (str[i]))
        {
            dcount++;
        }
        else if (isspace (str[i]))
        {
            scount++;
        }
        else
            spcount++;
        i++;
    }
    printf("\nNo of alphabate %d", acount);
    printf("\nNo of vowel %d", vcount);
    printf("\nNo of consonant %d", ccount);
    printf("\nNo of digit %d", dcount);
    printf("\nNo of space %d", scount-1);
    printf("\nNo of special character %d", spcount);

    return 0;
}
