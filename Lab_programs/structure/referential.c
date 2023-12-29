#include<stdio.h>
struct str
{
    int a;
    struct str* link;
};

int main()
{
    struct str s1;
    s1.a = 1;
    s1.link = NULL;

    struct str s2;
    s2.a = 3;
    s2.link = NULL;

    struct str s3;
    s2.a =43;
    s2.link = NULL;

    s1.link = &s2;
    s2.link=&s3;
    return 0;

   
}
