// To find the root of quadratic equation.
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, choice;
    double disc, r1, r2, real, img;

    printf("\nEnter a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);

    disc = (b * b) - (4 * a * c);

    if (disc > 0)
        choice = 1;
    else if (disc < 0)
        choice = 2;
    else
        choice = 3;

    switch (choice)
    {
        case 1:
        {
            printf("\nReal and Distinct Roots\n");

            r1 = (-b + sqrt(disc)) / (2.0 * a);
            r2 = (-b - sqrt(disc)) / (2.0 * a);

            printf("\nroot1 = %0.2f", r1);
            printf("\nroot2 = %0.2f", r2);
        }
        break;

        case 2:
        {
            printf("\nRoots are Complex and Distinct\n");

            real = -b / (2.0 * a);
            img = sqrt(-disc) / (2.0 * a);

            printf("\nroot1 = %0.2f + i%0.2f", real, img);
            printf("\nroot2 = %0.2f - i%0.2f", real, img);
        }
        break;

        case 3:
        {
            printf("\nRoots are Equal\n");

            r1 = -b / (2.0 * a);
            r2 = -b / (2.0 * a);

            printf("\nroot1 = %0.2f", r1);
            printf("\nroot2 = %0.2f", r2);
        }
        break;

        default:
            printf("\nInvalid inputs");
    }

    return 0;
}
