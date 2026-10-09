#include <stdio.h>

void main()
{
    int marks = 81;

    int submarks [] = {95,83,91,75};
                   //     0 1  2  3
    printf("Marks: %d\n",marks);
    

    for(int i=0;i<4;i++)
    {
        printf("Submarks: %d\n",submarks[i]);
    }
}
