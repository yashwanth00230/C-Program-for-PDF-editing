#include<stdio.h>
int main()
{
    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row size of the Matrix : ");
    scanf("%d",&row_size);
    printf("Enter the columns size of the Matrix : ");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];

    int i,j;
    printf("Enter the Matrix elements :\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    int point=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
        if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        }
    }
    if(point==1)
        printf("Given Matrix is not a diagonal Matrix.");
    else
        printf("Given Matrix is a diagonal Matrix.");
}


