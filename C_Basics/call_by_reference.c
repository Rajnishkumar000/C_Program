#include <stdio.h>
int add(int* a,int *b)
{
  int sum=(*a)+(*b);
  return sum;
}
int subtract(int* a,int* b)
{
  int sub=*a-*b;
  return sub;
}
int main()
{
  int a=4;
  int b=3;
  printf("Value before\n a=%d\n b=%d\n",a,b);
  int s=add(&a,&b);
  int p=subtract(&a,&b);
  printf("Value after sum = %d\n",s);
  printf("value after subtraction = %d\n",p);
}