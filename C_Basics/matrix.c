#include <stdio.h>
int main()
{
int i,j,k,m,n;
printf("Enter the no of rows and coloumn\n");
scanf("%d",&n);
getchar();
scanf("%d",&n);
int arr1[][]=new int[m][n];
int arr2[][]=new int[m][n];


printf("Enter the elements in array 1\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr1[i][j]);
}
printf("\n");
}
printf("Enter the elements in array 2");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d"&arr2[i][j]);
}
printf("\n");
}
printf("YOUR ENTERED ARRAY IS \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d"&arr1[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d"&arr2[i][j]);
}
printf("\n");
}

printf("YOUR MULTIPLIED ARRAY IS");

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
arrf[i][j]=arrf[i][j]+(arr1[i][k]*arr2[k][j]);
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",arrf[i][j]);
}
printf("\n");
}
}