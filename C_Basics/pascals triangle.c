#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,s=1,q=1,r=1,z,p,t,a,n;
  printf("Enter no of rows\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=n-1;j>i;j--)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
      a=i;
      
      
      while(a>0)
     {
      s=s*a;
      a--;
     }
     
     
     t=j;
     p=i-t;
     
     
     while(p>0)
    {
     q=p*q;
     p--;
    }
    
  
    
    while(t>0)
   {
    r=r*t;
    t--;
   } 
       
    
    z=s/(r*q);
    
    printf("%d ",z);
    
    s=1;q=1;r=1;
      
    }
    printf("\n");
    
  }
  
  return 0;
}