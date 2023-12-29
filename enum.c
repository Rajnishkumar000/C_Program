#include<stdio.h>
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    enum week x=monday;
    printf("%d",x+1);

}