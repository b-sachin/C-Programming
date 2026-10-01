#include <stdio.h>

void main()
{
    char choice;

    printf("Enter your choice: ");
    scanf("%c",&choice);

    switch(choice)
    {
        case 'F': printf("Fan\n");
                break;

        case 'L': printf("Light\n");
                break;

        default: printf("Invalid choice\n");
                 break;
        
        case 'T': printf("TV\n");
                break;


    }
}