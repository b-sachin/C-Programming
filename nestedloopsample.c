#include <stdio.h>

void main()
{
    int count =65;
    int n;
    printf("Enter number of levels: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%c",count);
            count++;
        }
        printf("\n");
    }
}