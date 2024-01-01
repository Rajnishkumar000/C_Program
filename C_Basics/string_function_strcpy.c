#include <stdio.h>
#include<strings.h>
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
  /*strcat(s1," is a friend of ");
    strcat(s1,s2);*/
  /*strcat(s1,s3);
    strcpy(s1,strcat(s1,s2));*/
    strcpy(s1,strcat(s1,strcat(s3,s2)));
   puts(s1);
 }