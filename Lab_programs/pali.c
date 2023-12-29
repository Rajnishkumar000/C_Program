#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int n)
{
    int k=n;
    int rev=0;
    while (k>0)
    {
       rev=rev*10+k%10;
       k=k/10;
    }
   // printf("%d",rev);

    return rev==n;
    
}
void isPrime(int n)
{
    int c=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        c=c+1;
        break;
        }

    }
    if(c==0)
    printf("%d \n",n);
}
void main()
{
//  bool c=isPalindrome(121);
//  if(c){
//  printf("True \n");
//  }
//  else
//  {
//    printf("False\n");
//  }

for(int i=1;i<10;i++)
{
    isPrime(i);
}
 
}