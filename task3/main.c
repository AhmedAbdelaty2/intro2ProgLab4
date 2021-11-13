#include <stdio.h>
#include <stdlib.h>

int powerSum(int x, int y);

int main()
{
    int x,y,result;

    printf("Please, enter the number: ");
    scanf("%d", &x);
    printf("Please, enter the power: ");
    scanf("%d", &y);

    result = powerSum(x, y);

    printf("%d", result);

    return 0;
}

int powerSum(int x, int y)
{
    if(y>1)
        x = x * powerSum(x, y-1);

    return x;
}
