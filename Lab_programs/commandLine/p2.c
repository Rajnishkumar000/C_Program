#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
    int sum=0,n;
    char* value;
    for(int i=0;i<argc;i++)
    {
        value=argv[i];
        n=atoi(value);
        sum+=n;
       
       
    }
    printf("%d",sum);

}