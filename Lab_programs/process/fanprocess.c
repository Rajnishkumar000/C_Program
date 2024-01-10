
// C program to create a fan of processes 
  
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/wait.h> 
#include <unistd.h> 
  
// Driver Code 
int main() 
{ 
    // Iterate in the range [0, 2] 
    for (int i = 0; i < 3; i++) { 
        if (fork() == 0) { 
            // getpid gives process id 
            // getppid gives parent process id 
            printf("child pid %d from the"
                   " parent pid %d\n", 
                   getpid(), getppid()); 
  
            // Set Normal termination of 
            // the program 
            exit(0); 
        } 
    } 
  
    for (int i = 0; i < 3; i++) 
      wait(NULL); 
} 