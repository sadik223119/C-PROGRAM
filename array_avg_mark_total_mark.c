// to read marks scored by n students and find the avarage of mark(demonstration of single dimentional array)

#include <stdio.h>
int main()
{
    int n, i;
    float marks[10], tot_mark, s = 0.0, avg_mark = 0.0;
    printf("\n Enter students counts(n): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter marks scored by %d student: ", i + 1);
        scanf("%f", &marks[i]);
        tot_mark = tot_mark + marks[i];
    }
    avg_mark = tot_mark / n;
    printf("\n Total mark= %.2f", tot_mark);
    printf("\n Avg mark= %.2f", avg_mark);
    return 0;
}