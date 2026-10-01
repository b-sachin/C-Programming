#include <stdio.h>

void main()
{
    int num;

step1:
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input! Try again.\n");
        goto step1;
    }

    printf("You entered: %d", num);
}