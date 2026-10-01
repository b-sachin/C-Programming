#include<stdio.h>

void main()
{
    int marks;
    
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>100 || marks <0)
    {
        printf("Invalid marks\n");
    }
    else if(marks>=80)
    {
        printf("Distinction\n");
    }
    else if(marks>=60)
    {
        printf("First class\n");
    }
    else if(marks>=50)
    {
        printf("Second class\n");
    }
    else if(marks>=40)
    {
        printf("Pass class\n");
    }
    else
    {
        printf("Fail\n");
    }
}