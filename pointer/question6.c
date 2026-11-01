/* Write a program to print the value of a variable i by using a pointer to pointer
type variable. */
#include <stdio.h>
int main(){
int i;
scanf("%d", &i);
int* j=&i;
int** k=&j;
// printf("The value of i is: %d\n", i);
// printf("The value of i is: %d\n", *j);
printf("The value of i is: %d\n", **k);
return 0;
}