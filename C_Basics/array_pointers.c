#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[2][2] = {{2, 13}, {9, 3}};
    int ara[4]={15,16,17,18};
    printf("The value at index 0 is %d\n\n", ara[0]);
    func1(ara);
    printf("\n\n");
    printf("The value at index 0 is %d\n\n", ara[0]);
    func2(ara);
    printf("\n\n");
    func2(ara);
    printf("\n\n");
    func3(arr);
    return 0;
}
