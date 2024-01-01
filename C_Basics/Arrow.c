#include<stdio.h>
int main()
{
  int i,j,p;
  printf("Enter the size\n");
  scanf("%d",&p);
  for(i=p-1;i>0;i--)
  {
    for(j=i*2;j>0;j--)
    {
      printf(" ");
    }
    for(j=i;j<=p-1;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  
  
  for(i=0;i<p*3;i++)
  {
    printf("*");
  }
  
  printf("\n");
  
  for(i=0;i<p;i++)
  {
    for(j=0;j<=i;j++)
    printf("  ");
    for(j=p-1;j>i;j--)
    printf("*");
    printf("\n");
  }
}