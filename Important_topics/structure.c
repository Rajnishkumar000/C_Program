#include<stdio.h>
struct student{
    int a;
    char c;
}v;
int main()
{
     struct student s1={12,'v'};
     printf("%d\n",s1.a);
     printf("%c\n",s1.c);

     v.a=3;
     v.c='q';
     printf("%d\n",v.a);
     printf("%c\n",v.c);


    // v k={2,'s'};
    // printf("%d",k.a);//this will through error because typedef is not used to declare v

     
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