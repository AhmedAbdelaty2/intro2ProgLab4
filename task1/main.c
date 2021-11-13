#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int i,max,min;

    for(i=0;i<5;i++)
    {
        printf("enter the number: ");
        scanf("%d", &arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");

    min = arr[0];
    max = arr[0];
    for(i=0;i<5;i++)
    {
        if(max<arr[i])
            max = arr[i];
        if(min>arr[i])
            min = arr[i];
    }

    printf("the maximum number is: %d\n", max);
    printf("the minimum number is: %d\n", min);
    return 0;
}
