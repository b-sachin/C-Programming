#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;
    char ch;
    char name[50];
    char city[50];

    /* 1. printf() and scanf() */
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Formatted I/O ---\n");
    printf("Age   = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n", grade);


    /* Clear the newline left by scanf() */
    getchar();


    /* 2. getchar() and putchar() */
    printf("\nEnter a character: ");
    ch = getchar();

    printf("You entered: ");
    putchar(ch);
    putchar('\n');

     /* Clear the newline left by scanf() */
    getchar();


    /* 3. getc() and putc() */
    printf("\nEnter another character: ");
    ch = getc(stdin);

    printf("You entered: ");
    putc(ch, stdout);
    putc('\n', stdout);


    /* 4. fgets() and puts() */
    printf("\nEnter your full name: ");
    getchar();
    fgets(name, sizeof(name), stdin);

    printf("Your name is: ");
    puts(name);


    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    printf("Your city is: ");
    puts(city);


    return 0;
}