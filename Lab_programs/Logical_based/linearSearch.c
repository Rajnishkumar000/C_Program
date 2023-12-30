#include<stdio.h>

 int search(int arr[],int n,int y)
   {
        for(int i=0;i<y;i++)
        {
            if(arr[i]==n)
            return 1;
            
        }
        return 0;
    

    }

    int reverse(int arr[],int size)
    {
        int temp;
        for(int i=0;i<size/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[size-i-1];
            arr[size-i-1]=temp;
        }

    }
    
    int printarray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }



    int main()
{
    int arr[]={1,4,2,8,3,9,0};
    // printf("Enter the no to search\n");
    // int n;
    // scanf("%d",&n);
    // int x=search(arr,n,sizeof(arr));
    // if(x==1)
    // printf("No is present");
    // else
    // printf("No is not present");                                                                                    

    reverse(arr,sizeof(arr)/sizeof(int));
    printarray(arr,sizeof(arr)/sizeof(int));
    
}