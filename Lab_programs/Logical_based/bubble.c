#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 4, 3, 0,-9,4,7,2,0};
    int count;
    int len = sizeof(arr) / sizeof(arr[0]);
     printarray(arr,len);
     printf("\n");
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    printarray(arr,len);
   
}
 int printarray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }
