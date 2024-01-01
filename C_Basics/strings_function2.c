#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>

int main()
{
    char s1[20];
    char s2[20];
    char s3[]={" is a friend of "};


    printf("Enter both name\n");
    gets(s1);
    gets(s2);
  /*strcat(s1,s3);
    strcat(s1,s2);*/
    strcat(s1," is a friend of ");
    strcat(s1,s2);
  
     
    puts(s1);

}