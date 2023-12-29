// #include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int i;
    pid_t childpid;
    for(i = 1 ; i < 8 ;i++){
          childpid = fork();
          if(childpid<=-1)
            break;
    }
    printf("qq");
    return 0;
}