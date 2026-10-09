#include <stdio.h>

void main()
{
    int n = 0,num;
    printf("Enter number of levels: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        
        }

        num = 1;

        for(int k=0;k<=i;k++)
        {
            printf("%d ",num);
            num = num*(i-k)/(k+1);           
        }
        printf("\n");
        
    }
}