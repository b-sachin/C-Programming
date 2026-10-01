#include <stdio.h>

void main()
{
    char c = 'A';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",c+i);
        }
        printf("\n");
    }
}