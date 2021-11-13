#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];
    int i, j;
    float sum=0, average=0;

    for(i=0;i<3;i++)
    {
        printf("Enter the grades of student number %d:\n", i+1);

        for(j=0;j<4;j++)
        {
            scanf("%d" ,&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            sum = sum+arr[i][j];
        }
        average = sum/4;
        printf("the sum of subject's grades for student number %d is %f\n",i,sum);
        printf("the average of subject's grades for student number %d is %f\n",i,average);
        sum = 0;
    }

    return 0;
}
