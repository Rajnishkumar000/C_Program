#include<stdio.h>
int main()
{
    char str[3];
    fgets(str,4,stdin);
    int len=strlen(str);
    printf("%d",len);

}