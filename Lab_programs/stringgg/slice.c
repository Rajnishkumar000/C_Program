#include<stdio.h>
#include<string.h>

void slicee(char str[],int x,int y,int k)
{
    char newstr[]="";
    for(int i=x;i<y;i+=k)
    {
        printf("%c",str[i]);

    }
    printf("\n");
}
int main()
{
    char str[]="Rajnish";
    int x=3;
    int y=6;
    int k=2;
    // slicee(str,x,y,k);
    char s1[]="Raj";
    char s2[]="nish";
    strcat(s1,s2);
    printf("%s",s1);
   
}