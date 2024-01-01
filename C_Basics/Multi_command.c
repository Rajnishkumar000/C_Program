#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,a,j,x, f,z=0,y,t, k, m,c,b,sum=0,r,n, num, flag=0,temp, rev=0, digit, sumOfDigits=0;
  char str[20];
  printf("Enter your name\n");
  scanf("%s",str);
  printf("\n");
  printf("Welcome %s To number System coding.. 😊😊\n",str);
  printf("\n");
  printf("Here you have 2 choices.\n");
  printf("\n");
  while(z==0)
  {
  printf("Press 1 for checking given number is of which type and press 2 for printing pattern\n");
  scanf("%d",&n);
  switch(n)
  {
    case 1:
      printf("Enter 1 to check Prime Number 2 for Magic Number,3 for Armstrong Number,and 4 for Palindrome Number\n");
      scanf("%d",&a);
      switch(a)
      {
        case 1:
          printf("Enter the number to check prime:\n");    
scanf("%d",&b);    
for(i=2;i<=b;i++)    
{  
  c=b%i;  
  flag++;
if(flag==2)    
{    
printf("Number %d is not prime\n",b);   
break;
}    
}    
if(flag<=1)    
printf("Number %d is prime\n",b);
break;
case 2:
      printf("Enter the number to check magic number:\n");
      scanf("%d",&num);
      temp = num;
 
    while(temp > 0){
        sumOfDigits += temp % 10;  
        temp = temp / 10;      
    }

 
   temp = sumOfDigits;
    while( temp > 0){
        rev = rev*10 + temp % 10; 
        temp = temp / 10;
    }
 
    if(rev*sumOfDigits == num)
        printf("%d is Magic Number \n", num);
    else
        printf("%d is Not a Magic Number \n",num);
        break;
        case 3:
          printf("Enter number to check Armstrong number:\n");
          scanf("%d", &m);
          temp=m;    
while(m>0)    
{    
r=m%10;    
sum=sum+(r*r*r);    
m=m/10;    
}    
if(temp==sum)    
printf("%d is a armstrong  number\n",temp);    
else    
printf("%d is not a armstrong number\n",temp);
   break;
   case 4:
     printf("Enter number to check Palindrome number:\n");
     scanf("%d", &m);
     temp=m;    
while(m>0)    
{    
r=m%10;    
sum=(sum*10)+r;    
m=m/10;    
}    
if(temp==sum)    
printf("%d is a palindrome number\n",temp);    
else    
printf("%d is not a palindrome\n", temp);
break;
default :
  printf("Number %d is not present in the given option\n",a);
        }
        break;
        case 2:
          printf("Press 1 for type 1 pattern, 2 for type 2 pattern,3 for type 3 pattern and 4 for type 4 pattern\n");
          scanf("%d",&a);
          switch(a)
          {
            case 1:
              printf("Enter the number of rows:\n");
   scanf("%d", &b);
   for (i = 1; i <=b; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
      printf("\n");
              
          }
          break;
          case 2:
    printf("Enter the number of rows to show number paatern: ");
scanf("%d",&b);
for(x = 1; x <= b; x++)
{
for(y = x; y <b; y++)
{
printf(" ");
}
for(k = 1; k < (x*2); k++)
{
printf("%d",k);
}
printf("\n");
}
for(x = 4; x >= 1; x--)
{
for(y = n; y >  x; y--)
{
printf(" ");
}
for(k = 1; k < (x*2); k++)
{
printf("%d",k);
}
printf("\n"); 
  }
  break;
  case 3:
    printf("Enter the number:\n");  
  scanf("%d",&t);  
  m=2*t-1;  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
         printf("*");  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("\n");  
  }  
        break;
        case 4:
              printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=n;j++)  
        {  
            if(i==1 ||i==n||j==1||j==n)  
            {  
            printf("*");  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
    break;
  default:
    printf("Number is not present in the given option\n");
  }
  }
  printf("Enter 1 for continue and 0 for exit.\n");
  scanf("%d",&f);
  if(f==1)
  {
    continue;
  }
  else if(f==0)
  {
    break;
  }
  else
  {
    printf("Wrong Input\n");
  }
  }
  printf("Thank you for visiting %s...🙏🙏🙏",str);
  return 0;
}