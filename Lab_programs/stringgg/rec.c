#include <string.h>
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the String\n");
    fgets(str, 100, stdin);
    rev(str,strlen(str));
}
void rev(char str[100],int le)
{
     char reverse[100]="";
    if(le==0)
    {
        printf("%s",reverse);
        return;
    }
    printf("%d",str[le]);
    
    // strcat(str[le],reverse);
    rev(str,le-1);
   
}
