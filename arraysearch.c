//search a given number in an array.

#include <stdio.h>

void main()
{
    int n,x,found=-1;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be search: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            found = i;
            break;
        }
    }

    if(found == -1)
    {
        printf("Element Not Found\n");
    }
    else
    {
        printf("Element found at location %d\n", (found+1));

    }
}










