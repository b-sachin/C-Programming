//print sum of 5 number using array.

#include <stdio.h>

void main()
{
    int n,sum=0;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    printf("Sum of all elements: %d",sum);
}