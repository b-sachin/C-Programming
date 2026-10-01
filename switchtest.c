#include <stdio.h>

void main()
{
    int marks, grade;

    printf("Enter marks: ");
    scanf("%d", &marks);

    grade = marks / 10;

    switch(grade)
    {
        case 10:
        case 9:
        case 8:
            printf("Distinction");
            break;

        case 7:    

        case 6:
            printf("Grade A");
            break;

        case 5:
            printf("Grade B");
            break;

        case 4:
            printf("PASS");
            break;

        case 3:
        case 2:
        case 1:
        case 0:
            printf("FAIL");
            break;
        
        default:
            printf("Invalid Marks");
            break;
    }
}
