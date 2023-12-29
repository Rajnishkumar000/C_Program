#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 1, 3, 1};
    int count;
    int len = sizeof(arr) / sizeof(arr[0]);
    count = 1;
    int j;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }

        for (j = i + 1; j < len; j++)
        {

            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = 0;
            }
        }

        printf("%d -->%d\n", arr[i], count);

        count = 1;
    }
}
