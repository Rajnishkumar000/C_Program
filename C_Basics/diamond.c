#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,j,n;
  printf("Enter no of rows\n");
  scanf("%d",&n);
  for (i=n;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
      printf(" ");
    }
    for(j=n;j>=i;j--)
    {
      printf("*");
    }
    for(j=0;j<n-i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<i+2;j++)
    {
      printf(" ");
    }
    for(j=0;j<n-i-1;j++)
    {
      printf("*");
    }
    for(j=n-i-2;j>0;j--)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}