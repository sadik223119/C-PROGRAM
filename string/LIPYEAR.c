#include <stdio.h>
int main()
{
    int year;
    printf("Enter Your Year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Your year is Leapyear");
    }
    else
        printf("Your year is not Leapyear");
    return 0;
}