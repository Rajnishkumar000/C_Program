#include<stdio.h>
void toBinary(int n)
{
  if(n==0)
  return;

  toBinary(n/2);
  printf("%d",n%2);
}
void toBin(int n)
{
    int binary=0;
    int f=1;
    while(n>0)
    {
        // binary=binary+(n%2)*f;
        binary=(binary*10)+(n%2)*f*10;
         n=n/2;
    }
    printf("%d",binary);
}
void main()
{
    //toBinary(11);
    printf("\n");
    toBin(4);
    printf("\n");
}