#include<stdlib.h>
#include<stdio.h>
int main()
{
    // syntax->void* malloc(sizeof(0)) for void type
    // syntax->int* malloc(sizeof(0)) for int type 
    int *p,*q;
    p=(int*)malloc(sizeof(int));
    p[0]=2000;
    *p=1000;
    printf("%d",*p);

    q=(int*)malloc(10*sizeof(int));//10 element each of 4 bytes and base address will be inside pointers q
    free(p);
}