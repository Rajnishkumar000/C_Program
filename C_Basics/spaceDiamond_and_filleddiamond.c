#include <stdio.h>

void spacediamond(int rows)
{
  int i,j;
   for (i = 0; i<rows; i++)
    {
        for ( j = rows; j>i; j--)
        {
            printf("*");
        }
        
         for(j=0;j<i*2;j++)
        {
          printf(" ");
        }
        for(j=rows;j>i;j--)
        {
          printf("*");
        }
       
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    for(i=rows;i>0;i--)
    {
      for(j=rows;j>=i;j--)
      {
        printf("*");
      }
      
      
      for(j=(i*2)-2;j>0;j--)
      {
        printf(" ");
      }
      
      
      
      for(j=rows;j>=i;j--)
      {
        printf("*");
      }
      printf("\n");
      
    }
  
 
    
}
void diamond(int n)
{
  int i,j;
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
}


int main()
{
  
    int rows,a,type;
    again:
    printf("Enter \n0 for space Diamond OR 1 for diamond\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        spacediamond(rows);
        break;
    case 1:
      diamond(rows);
      break;

    default:
        printf("You have entered an invalid choice\n");
        break;
    }
    printf("If you want to run again type 1 \n");
    scanf("%d",&a);
    if(a==1)
    goto again;
    

    return 0;
}
