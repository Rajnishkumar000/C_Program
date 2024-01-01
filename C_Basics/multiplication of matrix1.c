#include <stdio.h>
int main()
{
int i,j,k,m,n;
printf("Enter the no of rows and coloumn \nno of rows should be equal to no\nof columns and both array\n should have same size\n");
scanf("%d",&m);
getchar();
scanf("%d",&n);
int arr1[m][n];
int arr2[m][n];
int arrf[m][n];


printf("Enter the elements in array 1\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr1[i][j]);
}
}

getchar();
printf("Enter the elements in array 2\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr2[i][j]);
}

}
getchar();
printf("YOUR ENTERED ARRAY IS \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",arr1[i][j]);
}
printf("\n");
}
printf("\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",arr2[i][j]);
}
printf("\n");
}
printf("\n");
printf("YOUR MULTIPLIED ARRAY IS\n");

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
  arrf[i][j]=0;
for(k=0;k<n;k++)
{
arrf[i][j]=arrf[i][j]+((arr1[i][k])*(arr2[k][j]));
}
}

}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",arrf[i][j]);
}
printf("\n");
}
}