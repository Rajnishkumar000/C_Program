#include <stdio.h>

void starPattern(int rows)
{
  
   for (int i = 0; i<rows; i++)
    {
        for (int j = rows; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
  
  
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
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
    printf("Enter 0 for star pattern \n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;

    default:
        printf("You have entered an invalid choice");
        break;
    }
    printf("If you want to run again type 1 \n");
    scanf("%d",&a);
    if(a==1)
    goto again;
    

    return 0;
}
