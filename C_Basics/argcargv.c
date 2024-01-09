#include<stdio.h>
int main(int argc,char* argv[])
{
    // argv[1]=12\34;
    for(int i=0;i<argc;i++)
    {
        printf("arr[%d] is %s \n",i,argv[i]);
    }

}
