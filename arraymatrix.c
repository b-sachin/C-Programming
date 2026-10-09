#include <stdio.h>

void main()
{
    int m,n;

    printf("Enter number of rows and column: ");
    scanf("%d%d",&m,&n);

    int arr[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter value for element [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Before Transpose:\n");

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("After Transpose:\n");

    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}

//{{1,2,3},
 //{4,5,6},
 //{7,8,9}}