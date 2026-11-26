/* Write a program to store the details of 3 employees from user defined data. Use the structure declared
above. */
#include <stdio.h>
struct Employee
{
    char name[15];
    int code;
    float salary;
};
int main()
{
    struct Employee e1[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n------Enter Employee %d Details-------\n", i + 1);
        printf("Enter Employee %d Name: ", i + 1);
        scanf("%s", &e1[i].name);
        printf("Enter Employee %d Code: ", i + 1);
        scanf("%d", &e1[i].code);
        printf("Enter Employee %d Salary: ", i + 1);
        scanf("%f", &e1[i].salary);
    }
    return 0;
}