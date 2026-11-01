// read two matrix and add them and display
#include <stdio.h>
#include <string.h>
int rows, col;
int matrixadd(int mat1[10][10], int mat2[10][10], int mat3[10][10])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return matrixadd;
}

int main()
{
    int mat1[10][10], mat2[10][10], mat3[10][10], i, rows, columns;
    printf("\n Enter no of rows and columns(<=10): ");
    scanf("%d %d", &rows, &columns);

    if (rows > 10 || columns > 10)
    {
        printf("No of rows/columns is greater than 10\n");
        return 0;
    }
}