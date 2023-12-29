#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("i am process %d\n",(long)getpid());
    printf("i am process %d\n",(long)getppid());

}