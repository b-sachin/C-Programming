#include <stdio.h>

void main()
{
    for(int i=0;i<=2;i++)
    {
        if(i==1)
        {
            continue;
        }
        printf("%d",i);
    }
    printf("End of loop");
}
