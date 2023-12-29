#include<stdio.h>
int main()
{
    char str[]="computer";
    char str1[]={'c','o','m','\0'};
    printf("%c",str[2]);
    printf("%c",str1[2]);
    char str2[5]="computer";
    // C program to illustrate fgets()


    printf("Enter the string\n");
    int MAX=16;
	char buf[MAX];
	fgets(buf, MAX, stdin);
	printf("string is: %s\n", buf);

     printf("Enter the string\n");
     char stri[30];
     scanf("%s",stri);
     printf("%s",stri);

     char* ptr=buf;
     while(*ptr!='\0')
     {
        printf("%c",*ptr);
        ptr=ptr+1;
     }




	
}


