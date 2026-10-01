#include <stdio.h>
void main()
{
    int choice;
    do
    {
        printf("1. Addition\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your Choice: ");
        scanf("%d",&choice);

        printf("You Entered = %d\n",choice);
    }while(choice!=5);
}