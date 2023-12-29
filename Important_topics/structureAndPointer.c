#include<stdio.h>
struct student{
    int a;
    char c;
};
int main()
{
     struct student s1,*p;
     p=&s1;
     s1.a=5;
     s1.c='x';
     printf("%d",p->a);//since the precedence of . operator is high eg *p.a in this operation first p.a will be evaluated 
    // but p is not defined that is *(p.a) it will be treated so we have to use like (*p).a so instead of writing this we are
    // using -> operator to point
}