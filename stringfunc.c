#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[20] = "World";
    char copy[50];

    // 1. strlen() - Find string length
    printf("Length of str1 = %zu\n", strlen(str1));

    // 2. strcpy() - Copy one string into another
    strcpy(copy, str1);
    printf("Copied string = %s\n", copy);

    // 3. strcat() - Join two strings
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    // 4. strcmp() - Compare two strings
    if(strcmp(copy, str2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}