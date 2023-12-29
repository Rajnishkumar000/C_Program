#include<stdio.h>
int main(){
    printf("Enter the string\n");
    int MAX=16;
	char buf[MAX];
	fgets(buf, MAX, stdin);
	printf("string is: %s\n", buf);
    func(buf,sizeof(buf));
    
}
void func(char str[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%c  ",str[i]);
    }
}