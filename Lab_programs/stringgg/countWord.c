#include<stdio.h>
#include<string.h>
void countword(char str[])
{
    int c=1;
    
    for(int i=0;i<strlen(str);i++)
    {
        char ch=str[i];
        if(ch==' ')
        {
            c+=1;
        }
        
        
    }
    printf("The no of words in string is/are %d\n",c);
}
void freq(char str[])
{
    int fr[255];
    for(int i=0;i<sizeof(fr)/sizeof(0);i+=1)
    {
        fr[i]=0;
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        fr[str[i]]+=1;
    }
    int max=0;
    int k;
    for(int i=0;i<255;i++)
    {
        if(fr[i]>0)
        printf("%c : %d \n",(char)i,fr[i]);
       
    }
    for(int i=0;i<255;i++)
    {
        if(max<fr[i]){
        max=fr[i];
         k=i;
        }
    }
    printf("maximum value is %d of %c \n\n",max,(char)k);
}

int main(){
    // printf("Enter the string\n");
    // char str[100];
    // fgets(str, 100, stdin);
    // countword(str);
    char str[]="Rajnish is my name";
    freq(str);
   
    

}