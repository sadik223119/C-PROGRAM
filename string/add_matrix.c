// read two matrix and add them and display
#include <stdio.h>
#include <string.h>

int rows, columns;
void matrixadd(int mat1[10][10], int mat2[10][10], int mat3[10][10])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], i, j;
    printf("\n Enter no of rows and columns(<=10): ");
    scanf("%d %d", &rows, &columns);

    if (rows > 10 || columns > 10)
    {
        printf("No of rows/columns is greater than 10\n");
        return 0;
    }

    printf("Enter the input for first matrix: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the input for second matrix: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    matrixadd(mat1, mat2, mat3);

    printf("Result of matrix addition: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%5d", mat3[i][j]);
        }
        printf("\n");
    }
}