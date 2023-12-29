#include<stdio.h>
enum x
{
    EXECUTE=1,
    WRITE=1,
    READ=1
    

};
int main()
{
    int x=EXECUTE | WRITE | READ;
    printf("%d",x);
}
