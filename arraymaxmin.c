#include <stdio.h>

void main()
{
    int n,max,min;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr [n];

    for(int i=0;i<n;i++)
    {
        printf("Enter Elements: \n");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(int i=0; i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("Max value is: %d\n",max);
    printf("Min value is: %d\n",min);
}
