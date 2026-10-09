#include <stdio.h>

void main()
{
    int count =65;
    int n;
    printf("Enter number of levels: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            printf("%d",count-65);
            count++;
        }
        printf("\n");
    }
}