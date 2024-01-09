#include <stdio.h>
#include<string.h>
int main()
{
    char s[]="rajnish";
    printf("%c\n",s[0]);
    printf("%s\n",s);
    printf("%d\n\n",s);

    char ch[]={'R','A','J'};
    printf("%c\n",ch[0]);
    printf("%s\n",ch);
    printf("%d\n",ch);


    
    
    // char *c=ch;
    // printf("%c\n",c[0]);
    // printf("%s\n",c);
    // printf("%d\n",c);

    char c[]={'M','U','K'};
    char *str=c;
    printf("%c\n",c[0]);
    printf("%s\n",c);
    printf("%d\n",c);



}