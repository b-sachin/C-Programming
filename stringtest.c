#include <stdio.h>
void main()
{
    char ch1 = 'A';
    char ch2[] = {'S','A','C','H','I','N'};
    char ch3[] = "SACHIN";
    char ch4[] = {'S','A','C','H','I','N','\0'};

    char ch5[10];

    printf("%c\n",ch1);
    printf("%c\n",ch2[1]);
    printf("%c\n",ch3[1]);
    printf("%c\n",ch4[1]);

    //printf("%s\n",ch1);
    
    printf("%s\n",ch3);
    printf("%s\n",ch4);
    //printf("%s\n",ch2);

    for(int i=0; ch3[i]!='\0';i++)
    {
        printf("%c \n",ch3[i]);
    }

    printf("Enter value for ch5: ");
    scanf("%s",ch5);
    printf("ch5 value is: %s\n",ch5);
}

