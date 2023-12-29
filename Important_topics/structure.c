#include<stdio.h>
struct student{
    int a;
    char c;
}v;
int main()
{
     struct student s1={12,'v'};
     printf("%d",s1.a);
     printf("%c",s1.c);

    //  v.a=3;
    //  v.c='q';
    //  printf("%d",v.a);
    //  printf("%c",v.c);


    // v k={2,'s'};
    // printf("%d",k.a);

     
}

//USING TYPEDEF
// #include<stdio.h>
// typedef struct student{
//     int a;
//     char c;
// }x,y;
// int main()
// {
//      x s1={12,'v'};
//      printf("%d",s1.a);
//      printf("%c",s1.c);
// }