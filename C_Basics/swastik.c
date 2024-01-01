#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter the no\n\n");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<1;j++)
    printf("**");
    for(j=0;j<n-1;j++)
    printf("  ");
    for(j=0;j<1;j++)
    printf("**");
    for(j=0;j<n;j++)
    {
      if(i==0)
      printf("**");
    }
    printf("\n");
  }
  
  for(i=0;i<=n*2;i++)
  {
    
    printf("**");
    
  }
  printf("\n");
  for(i=0;i<=n*2;i++)
  printf("**");
  
  printf("\n");
  
  
  for(i=0;i<n-1;i++)
  {
     for(j=0;j<n*2;j++)
    {
     printf(" ");
    } 
    for(j=0;j<1;j++)
    printf("**");
    for(j=0;j<n-1;j++)
    printf("  ");
    
    for(j=0;j<1;j++)
    printf("**");
    
    printf("\n");
  
  }
  for(i=0;i<n*2+2;i++)
  printf("*");
  
  for(i=0;i<n*2-2;i++)
  printf(" ");
  printf("**");
  
  
  printf("\n\n\n");
  return 0;
}

