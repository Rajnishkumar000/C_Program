#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="Raj";
    char str1[10]="Raju";
    char str3[10]="raj";
    printf("%d\n",strcmp(str,str1));
    printf("%d\n",strncmp(str,str1,3));
    printf("%d\n",strcasecmp(str3,str));
    char s1[] = "Good Bye";
    char s2[] = "Bye";
    printf("%d\n",strstr(s1,s2)-s1);
    char* result=strstr(s1,s2);
    printf("%d\n",result);
    printf("%d\n",s1);

    printf("%d\n",result-s1);
//    strchr

}