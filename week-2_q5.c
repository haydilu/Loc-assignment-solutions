
#include <stdio.h>

int main()
{
    int mat1[2][2], mat2[2][2], sum[2][2], pdt[2][2];
    //Taking input matrix 1
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter matrix1[%d][%d] : ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    //Taking input matrix 2
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter matrix2[%d][%d] : ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    //Displaying matrix 1
    printf("Matrix 1 is displayed as : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", mat1[i][j]);
        }
        printf("\n");
    }
    //Displaying matrix 2
    printf("Matrix 2 is displayed as : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", mat2[i][j]);
        }
        printf("\n");
    }
    //Sum of the two matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    //Displaying the sum
    printf("The Sum of The Two Matrices Results : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    //Product of the two matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            pdt[i][j] = 0;
            for(int k = 0; k<2 /*column*/; k++)
            {
                pdt[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    //Displaying the product
    printf("The Product of The Two Matrices Results : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", pdt[i][j]);
        }
        printf("\n");
    }

    return 0;
}