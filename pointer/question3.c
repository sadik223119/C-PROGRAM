/* Write a program to change the value of a variable to ten times its current value */
#include <stdio.h>
void changeValue(int *i) {
    *i *= 10;
}
int main(){
    int i;
    scanf("%d", &i);
    changeValue(&i);
    printf("The value of i after change is: %d\n", i);
    return 0;
}