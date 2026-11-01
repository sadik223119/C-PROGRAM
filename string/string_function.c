#include <stdio.h>
#include <string.h>
int main()
{
    /* char *str1 = "Bengaluru";
    char *str2 = "Nagara"; */

    char str1[100] = "Bengaluru"; 
    char str2[100] = "Nagara";

    printf("\n String 1 is: %s , String 2 is: %s", str1, str2);
    printf("\n 1. Length of string %s: %d", str1, strlen(str1));
    printf("\n 2. String copy in str2: %s", strcpy(str2, "City"));
    printf("\n 3. Concatenation of strings: %s", strcat(str1, str2));
    printf("\n 4. Compare str1 and str2: %d", strcmp(str1, str2));
    printf("\n 5. String 1 in Lowercase: %s \n String 2 in Lowercase: %s", strlwr(str1), strlwr(str2));
    printf("\n 6. String 1 in Uppercase: %s \n String 2 in Uppercase: %s", strupr(str1), strupr(str2));
    printf("\n 7. Duplicate string: %s", strdup(str1));
    printf("\n 8. String reverse: %s", strrev(str1));
    printf("\n 9. Substring search: %s", strchr(str1, ('N')));
    printf("\n 10.set all characters to #=%s", strset(str1, '#'));

    return 0;
}