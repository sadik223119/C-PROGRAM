// 	To read a number, find the sum of the digits, reverse the number and check it for palindrome.
#include <stdio.h> // Include the standard input-output library for using printf and scanf functions
int main()
{
    int num, orgnum;
    int sum = 0, rev = 0, rem;
    printf("Enter a number: ");   // Prompt the user to enter a number
    scanf("%d", &num);  // Read the number from user input
    orgnum = num;
    while (num > 0)        // num > 0 means the loop will continue until num becomes 0
    {
        rem = num % 10;          // Get the last digit
        sum = sum + rem;   // Add the last digit to sum
        rev = rev * 10 + rem;  // Build the reversed number 
        num = num / 10;   // Remove the last digit from num
    }
    printf("\n Sum of digits= %d", sum);    // Print the sum of digits
    printf("\n Reversed number= %d", rev);    // Print the reversed number
    if (orgnum == rev)      // Check if the original number is equal to the reversed number
        printf("\n Number is palindrome");
    else   // If the original number is not equal to the reversed number
        printf("\n Number is not a palindrome");
 return 0;
}