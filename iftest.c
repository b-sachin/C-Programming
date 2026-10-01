#include <stdio.h>

void main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not eligible for Voting\n");
    }
}