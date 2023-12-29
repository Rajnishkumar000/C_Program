#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        display(arr[i]);
    }
     printf("%d    ",sizeof(arr));
    printf("\n\n");
    display1(arr);
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        printf("%d ",arr[i]);
       
    }
    printf("\n\n");


}
void display(int x)
{
 printf("%d ",x);
}

void display1(int arr[])
{
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        printf("%d ",arr[i]);
        arr[i]=arr[i]+10;
    }
    printf("\n");
    

}