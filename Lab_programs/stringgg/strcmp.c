#include<stdio.h>
#include<string.h>
int main()
{
    char s1[9];
    char s2[4];
    scanf("%s %s",s1,s2);
    int a=strcmp(s1,s2);
    // printf("%d\n",(int)'R');
    printf("%d\n",a);
    strcat(s1,s2);
    printf("%s ",s1);
    // strupr(s1);
    // printf("%s",s1);
     for (int i = 0; s1[i]!='\0'; i++) {
      if(s1[i] >= 'a' && s1[i] <= 'z') {
         s1[i] = s1[i] -32;
      }
   }
   printf("String in Upper Case = %s \n", s1);
   return 0;

}