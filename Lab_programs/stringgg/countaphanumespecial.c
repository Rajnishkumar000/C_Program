#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the String\n");
    fgets(str, 100, stdin);
    count(str);


}
void count(char str[100])
{
    int capitalLetter=0;
    int smallLetter=0;
    int specialcharacter=0;
    int numeric=0;
    for(int i=0;i<strlen(str)-1;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        capitalLetter+=1;

        else if(str[i]>='a' && str[i]<='z')
        smallLetter+=1;

        else if(str[i]>='0' && str[i]<='9')
        numeric+=1;

        else
        specialcharacter+=1;

    }
    printf("no of capital letter is %d \n",capitalLetter);
    printf("no of smalll letter is %d \n",smallLetter);
    printf("no of numeric value is %d \n",numeric);
    printf("no of special character is %d \n",specialcharacter);

    }
    